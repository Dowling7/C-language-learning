#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//第一种
int main(){
int sum=0,a;
for(int i=100; i<=200; i++){
    a=1;
    int k =(int)sqrt(i);
    for(int j=2; j<=k; j++){
        if(i%j==0){
            a=0;
            break;
        }
    }
    if (a==1){
        sum++;
        printf("num:%d\n",i);
    }
}
    printf("sum is %d\n",sum);

}

//第二种，辗转相除法
long gcd(long m, long n){
return m%n==0?n:gcd(n,m%n);
}
int main(void){
long m, n;
scanf("%ld %ld", &m, &n);
return 0;
}
//第三种，MR素性检验
#include <iostream>
 2 #include <cmath>
 3 using namespace std;
 4
 5 long long qpow(int a,int b,int r)//快速幂
 6 {
 7     long long ans=1,buff=a;
 8     while(b)
 9     {
10         if(b&1)ans=(ans*buff)%r;
11         buff=(buff*buff)%r;
12         b>>=1;
13     }
14     return ans;
15 }
16 bool Miller_Rabbin(int n,int a)//米勒拉宾素数测试
17 {
18     int r=0,s=n-1,j;
19     if(!(n%a))
20         return false;
21     while(!(s&1)){
22         s>>=1;
23         r++;
24     }
25     long long k=qpow(a,s,n);
26     if(k==1)
27         return true;
28     for(j=0;j<r;j++,k=k*k%n)
29         if(k==n-1)
30             return true;
31     return false;
32 }
33 bool IsPrime(int n)//判断是否是素数
34 {
35     int tab[]={2,3,5,7};
36     for(int i=0;i<4;i++)
37     {
38         if(n==tab[i])
39             return true;
40         if(!Miller_Rabbin(n,tab[i]))
41             return false;
42     }
43     return true;
44 }
45 int main()
46 {
47     long long n;
48     while(1)
49     {
50        cin >> n;
51     cout << IsPrime(n)<< endl;
52     }
53
54     return 0;
55 }

//第四种，埃氏筛法
bool pr[1000000];
for(int i=2; i<=maxn; i++) pr[i] = 1;//初始化
pr[0] = pr[1] = 0;//0和1都不是质数
for(int i=0; i<=maxn; i++){//找0~maxn的质数
    if(pr[i] == 1)//是质数
        for(int j=i*2; j<=maxn; j+=i){//找后面的所有合数
            pr[j] = 0;//标记
        }
}


//第五种， Min_25筛
#include <algorithm>
#include <cmath>
#include <cstdio>

using i64 = long long;

constexpr int maxs = 200000;  // 2sqrt(n)
constexpr int mod = 1000000007;

template <typename x_t, typename y_t>
inline void inc(x_t &x, const y_t &y) {
  x += y;
  (mod <= x) && (x -= mod);
}
template <typename x_t, typename y_t>
inline void dec(x_t &x, const y_t &y) {
  x -= y;
  (x < 0) && (x += mod);
}
template <typename x_t, typename y_t>
inline int sum(const x_t &x, const y_t &y) {
  return x + y < mod ? x + y : (x + y - mod);
}
template <typename x_t, typename y_t>
inline int sub(const x_t &x, const y_t &y) {
  return x < y ? x - y + mod : (x - y);
}
template <typename _Tp>
inline int div2(const _Tp &x) {
  return ((x & 1) ? x + mod : x) >> 1;
}
template <typename _Tp>
inline i64 sqrll(const _Tp &x) {
  return (i64)x * x;
}

int pri[maxs / 7], lpf[maxs + 1], spri[maxs + 1], pcnt;

inline void sieve(const int &n) {
  for (int i = 2; i <= n; ++i) {
    if (lpf[i] == 0)
      pri[lpf[i] = ++pcnt] = i, spri[pcnt] = sum(spri[pcnt - 1], i);
    for (int j = 1, v; j <= lpf[i] && (v = i * pri[j]) <= n; ++j) lpf[v] = j;
  }
}

i64 global_n;
int lim;
int le[maxs + 1],  // x \le \sqrt{n}
    ge[maxs + 1];  // x > \sqrt{n}
#define idx(v) (v <= lim ? le[v] : ge[global_n / v])

int G[maxs + 1][2], Fprime[maxs + 1];
i64 lis[maxs + 1];
int cnt;

inline void init(const i64 &n) {
  for (i64 i = 1, j, v; i <= n; i = n / j + 1) {
    j = n / i;
    v = j % mod;
    lis[++cnt] = j;
    idx(j) = cnt;
    G[cnt][0] = sub(v, 1ll);
    G[cnt][1] = div2((i64)(v + 2ll) * (v - 1ll) % mod);
  }
}

inline void calcFprime() {
  for (int k = 1; k <= pcnt; ++k) {
    const int p = pri[k];
    const i64 sqrp = sqrll(p);
    for (int i = 1; lis[i] >= sqrp; ++i) {
      const i64 v = lis[i] / p;
      const int id = idx(v);
      dec(G[i][0], sub(G[id][0], k - 1));
      dec(G[i][1], (i64)p * sub(G[id][1], spri[k - 1]) % mod);
    }
  }
  /* F_prime = G_1 - G_0 */
  for (int i = 1; i <= cnt; ++i) Fprime[i] = sub(G[i][1], G[i][0]);
}

inline int f_p(const int &p, const int &c) {
  /* f(p^{c}) = p xor c */
  return p xor c;
}

int F(const int &k, const i64 &n) {
  if (n < pri[k] || n <= 1) return 0;
  const int id = idx(n);
  i64 ans = Fprime[id] - (spri[k - 1] - (k - 1));
  if (k == 1) ans += 2;
  for (int i = k; i <= pcnt && sqrll(pri[i]) <= n; ++i) {
    i64 pw = pri[i], pw2 = sqrll(pw);
    for (int c = 1; pw2 <= n; ++c, pw = pw2, pw2 *= pri[i])
      ans +=
          ((i64)f_p(pri[i], c) * F(i + 1, n / pw) + f_p(pri[i], c + 1)) % mod;
  }
  return ans % mod;
}

int main() {
  scanf("%lld", &global_n);
  lim = sqrt(global_n);

  sieve(lim + 1000);
  init(global_n);
  calcFprime();
  printf("%lld\n", (F(1, global_n) + 1ll + mod) % mod);

  return 0;
}

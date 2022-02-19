#include<stdio.h>
struct 
{
    double x, y;
} st1,st2;

/*
struct point
{
    double x,y;
};
struct point st1, st2;
*/

//指向结构体的指针
int main(void){
typedef struct {
    double x,y;
} POINT;
POINT st1={3.1, 4.3};
POINT *pst1=&st1;
printf("%f", pst1->x);
}
// ->
/*指向结构体成员地址的指针
struct stdent stu;
sty.age;
struct student *ps;
ps = &stu;
(*ps).age // * ps->age 简单写法
return 0; */

/*宏定义与宏替换
#define 宏名 被替换的内容
#define LD long double
LD x=6.0;

#define MIN(x,y) ((x)<(y)?(x):(y))
#define SQUARE(x) x*x
int x=2, y=1;
z = SQUARE(x+y);   输出是5
#define ADD(x, y) x+y      //(x+y)
#define MUL(x, y) x*y      //(x)*(y)为了各种奇怪的宏，所有元素加括号
int sum= ADD(1,2)* ADD(3+4)    =11=1+2*3+4
int pro = MUL(1+3, 3+4 )

按位与运算符（&）
参加运算的两个数据，按二进制位进行“与”运算。
运算规则：0&0=0;  0&1=0;   1&0=0;    1&1=1;
按位或运算符（|）
参加运算的两个对象，按二进制位进行“或”运算。
运算规则：0|0=0；  0|1=1；  1|0=1；   1|1=1；
异或运算符（^）
参加运算的两个数据，按二进制位进行“异或”运算。
运算规则：0^0=0；  0^1=1；  1^0=1；   1^1=0

for(int i=0; i<100; i++)
{
    if(i%3 == 0)continue;
    printf("%d\n",i);
}

continue语句只在循环语句中。在循环体中的语句集合执行中，continue语句用于结束本次循环。
在for循环中跳至执行循环步长语句，以准备测试下一次循环的条件；在while循环中，则直接跳到循环条件测试。
break用于循环体中，跳出当前循环,碰到他循环结束
continue本次运行下面不再运行*/
#include<stdlib.h>
double test1(int x){
    int x=rand()%10;
    int i;
    for(i=2; i<x; i++){
        if (x%i ==0) break;
    }
    if(i>=x)printf("%d is a prime", x);
    else printf("%d is not a prime", x);
    system("pause");
    return 0;
    }

int fibonacci(int x,int y, int i, int t){
    printf("1\n1\n");
    for(x=y=1,i=0;i<200;i++){
       t=x+y;
       x=y;
       y=t;
       printf("%d\n",y);
    }
}

int maxcomfac (int x, int y, int i){
    for(i=2; i<x; i++){
        if (x%i==y%i == 0) break;
        printf("%d",i);
    }
    if(i>=x)printf("%d is a prime", x);
    else printf("%d is not a prime", x);
    system("pause");
    return 0;
    }
/*随机种子
#include<stdio.h>
#include<time.h>
rand();
strand(time(NULL));乘一个加一个 */
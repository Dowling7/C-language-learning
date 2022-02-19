//第六章作业
//第5题
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

//第一问
    char* str;
    int i=100001;
    int* j=&i;
    printf("%d\n",*j);
    i=0;
    str="102386306";
    int num = 0;
    while (*str) {
        num = 10*num;
        num = num+*str - '0';
        printf("%s-1\n\n",str);
        str++;
    }
    printf("%d\n",num);
    //其他函数
    /*
    str="1006";
    int n=atoi (str);
    printf("%d\n",n);
//第三问
    str="12345.23456";
    double num2 = 0;
    int point = 0;
    while (*str) {
        if (*str == '.')
            point++;
        else if (!point) {
            num2 *= 10;
            num2 += *str - '0';
        }
        else {
            point *= 10;
            num2 += (double) (*str - '0')/point;
        }
        str++;
    }

    printf("%lf",num2);

    */
    return 0;
}

//第6题
#include <stdio.h>
#include <malloc.h>

char* squeeze(char[], char[]);

int main() {
    char* s1;
    char* s2;
    s1 = "abcde";
    s2 = "345c8";
    printf("%s\n", squeeze(s1, s2));
    return 0;
}

char* squeeze(char s1[], char s2[]) {
    char* s3 = (char*)calloc(100, sizeof(char));
    int nn = 0, flag, count = 0;
    while (*s1) {
        s2 -= count*sizeof(char);
        flag = 0; count = 0;
        while (*s2) {
            if (*s1 == *s2)
                flag = 1;
            s2++;
            count++;
        }
        if (!flag)
            s3[nn++] = *s1;
        s1++;
    }
    s3[nn] = '\0';
    return s3;

}

//第7题
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void abc(int a[],int m,int n);
int main(){
    int a[100],i;
    for (i=0;i<100;i++) {a[i]=rand()%9;
    abc(a,100,7);
    return 0;
}}


void abc(int a[],int m, int n){
    int j=0;
    int i=0;
    for (i=0;i<m;i++) {   if (a[i]==n){
            j++;
            printf ("%d\n",1+i);
            break;
    }}
    if (j==0) printf("-1\n");
    }


//第八题
#include <stdio.h>
#include <math.h>

int sum (int n,int a[n]);

int main(){
    int a[3]={1,2,3};
    printf("%d\n",sum(3,a));

}



int sum (int n,int a[n]){
    int sum=0;
    for (int i=0; i<n; i++) sum+=a[i];
    return sum;
}

//第9题
#include<stdio.h>
#include<math.h>

int sum (int n ,int a[]);

int main(){
    //int a[]={1,2,3,4,5};
    //printf("%d\n",sum(5,a));
}



int sum (int n ,int a[]){
    int sum=0;
    for (int i=0;i<n;i++)  sum+=a[i];
    return sum;
}

int number(int n,int m,int k ,int a[]){
    int i=0;
    while (sum(n,a[n])<n*k-1){
        if (m<n){
            i++;
            if (i>k) i=1;
            a[m]=i;
            m++;
        }
        if(m=n){
            i++;
            if (i>k) i=1;
            a[m]=i;
            m=0;
        }
    for (int i=0;i<n;i++){
        a[i]<k;
        printf("%d",a[i]);
        break;
    }
    }
}

//第12题
#include<stdio.h>
int max(int n,int a[]){
    int max=a[0];
    for (int i=1;i<n;i++){
        if (a[i]>max) max=a[i];
        else max=max;
    }
    return max;
}

int main(){
    int a[6]={1,2,3,5,9,0};
    printf("%d\n",max(6,a));
    return 0;
}

//第13题
#include<stdio.h>
int def(int n,char* a){
    int jjj;
    jjj =0;
    n--;
    n--;
    for (int i=0;i<n;i++){
        if (a[i]==a[n-i])  jjj++;
        }
    if (jjj==n)  printf("yes\n%d\n",jjj-n);
    else printf("sb\n%d\n",n-jjj);
    }


int main(){
    char *a={"abcdcba"},*b={"abcdef"};
    def (sizeof(a),a);
    def (sizeof(b),b);
    return 0;
}

//第14题
#include<stdio.h>
int main(){
    int n=10;

}

void abc (int n){
    int a[n];
    for (int i=0;i<n;i++)   a[i]=i+1;
    int j=0,sum=0;

}

int tool

//第18题
#include<stdio.h>
#include<math.h>

void plus(int n, int m, int* a, int* b,int* c);
void iprint(int a[]);
void Multiply(int n, int* a,int *c);
int Determinant(int *a);

int main(){
    int a[]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6};
    int b[]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6};
    int c[16];
    int d[]={1,2,3,0,0,2,0,0,0,0,3,0,0,0,0,4};
    iprint(a);
    plus(4,4,a,b,c);
    iprint(c);
    Multiply(5,a,c);
    iprint(c);
    printf("%d\n",Determinant(d));
    printf("\n");
    return 0;
}


void plus(int n, int m, int* a, int* b,int* c){
    for (int i=0;i<m*n;i++) c[i]=a[i]+b[i];
}

void Multiply(int n, int* a,int *c){
    for (int i=0; i<16;i++) c[i]=n*a[i];
}

int Determinant(int *a){
    int det=0;
    det=a[0]*a[5]*(a[10]*a[15]-a[4]*a[14])+a[0]*a[9]*(a[6]*a[15]-a[7]*a[14])+a[13]*a[0]*(a[11]*a[6]-a[7]*a[10]);
    det+=a[4]*a[1]*(a[10]*a[15]-a[14]*a[11])+a[4]*a[9]*(a[2]*a[15]-a[14]*a[3])+a[4]*a[13]*(a[1]*a[11]-a[3]*a[9]);
    det=det + a[8]*a[1]*(a[6]*a[15]-a[14]*a[7])+a[8]*a[5]*(a[2]*a[15]-a[14]*a[13])+a[8]*a[13]*(a[2]*a[7]-a[3]*a[6]);
    det=det + a[12]*a[1]*(a[6]*a[11]-a[10]*a[7])+a[12]*a[5]*(a[2]*a[11]-a[10]*a[3])+a[12]*a[9]*(a[2]*a[7]-a[3]*a[6]);
    return det;
}

void iprint(int *a){
    for(int i=0;i<16;i++){
        printf("%d\t",a[i]);
        if ((i+1)%4==0) printf("\n");
    }
    printf("\n");
}

//第19题
#include <stdio.h>
int main() {
    FILE* fp1 = fopen("t1.txt", "r");
    FILE* fp2 = fopen("t2.txt", "w");
    int num = 1;
    char c0 = '0';
    while (fscanf(fp1, "%c", &c0) != EOF) {
        if (c0 == '<')
            num--;
        else if (c0 == '>')
            num++;
        if (num && c0 != '>')
            fputc(c0, fp2);
    }
    fclose(fp1); fclose(fp2);
    return 0;

}

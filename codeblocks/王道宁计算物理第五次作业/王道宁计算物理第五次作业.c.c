//第四章课后作业
//第10题
#include <stdio.h>
#include <math.h>
int main(){
    double pi;
    pi=0.5;
    double sum;
    for (int i=0;i<10;i++){
        int j=2*(i+1)+1;
        sum=pow(0.5,j)/j;
        printf("%f\n",sum);

        while (j-1>0){
            sum*=(double)(j-2)/(j-1);
            j=j-2;
            //printf("j=%d\n",j);
        }
        pi=sum+pi;
        printf("%f\n",sum);
    }
    pi*=6;
    printf("pi=%f\n",pi);
    return 0;
}


//第15题

#include<stdio.h>

void move(int n,char a,char b,char c)
{
    if(n==1)
        printf("\t%c->%c\n",a,c);    //当n只有1个的时候直接从a移动到c
    else
    {
        move(n-1,a,c,b);            //把a的n-1个盘子通过c移动到b
        printf("\t%c->%c\n",a,c);   //把a的最后1个盘(最大的盘)移动到c
        move(n-1,b,a,c);            //吧b上面的n-1个盘通过a移动到c
    }
}

int main()
{
    int n=64;
    move(n,'a','b','c');
}


//第16题
#include<stdio.h>
int xdh(int n){
    int a=n/100;
    int b=(n%100-n%10)/10;
    int c=n%10;
    //printf("%d%d%d",a,b,c);
    if (a*a*a+b*b*b+c*c*c==n)   return 1;
    return 0;
}
int main(){
    xdh(123);
    for (int i=100;i<1000;i++){
        if (xdh(i)==1)  printf("%d is a Narcissistic number\n",i);
    }
    return 0;
}

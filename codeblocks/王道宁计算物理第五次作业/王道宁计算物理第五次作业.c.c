//�����¿κ���ҵ
//��10��
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


//��15��

#include<stdio.h>

void move(int n,char a,char b,char c)
{
    if(n==1)
        printf("\t%c->%c\n",a,c);    //��nֻ��1����ʱ��ֱ�Ӵ�a�ƶ���c
    else
    {
        move(n-1,a,c,b);            //��a��n-1������ͨ��c�ƶ���b
        printf("\t%c->%c\n",a,c);   //��a�����1����(������)�ƶ���c
        move(n-1,b,a,c);            //��b�����n-1����ͨ��a�ƶ���c
    }
}

int main()
{
    int n=64;
    move(n,'a','b','c');
}


//��16��
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

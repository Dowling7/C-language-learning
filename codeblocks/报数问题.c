#include<stdio.h> 

//报数问题的实质是按照实际过程人数的序号进行推进，如报数报到3的人退出那么报数顺序是123 123 123 这样
//但是实际上走过的数字是123 456 789这样的按照实际数据转换到报数人的编号进行处理
int out(int m, int a[ ], int start, int k){
    if(m==1) return 0;
    int next=(start+k-1)%m;//这就是把实际的走过数组转换到报数人的编号，next是下一个被削掉的编号
    for (int i=next; i<m-1; i++) a[i]=a[i+1];//删除报到相应数字的人
    return next;
}

int main(void){
    int m=6;//一共六个人报数
    int k=3;//报数到3的人出局
    int a[m];//建立数组
    int start = 2;//从二号开始报
    for (int i =0; i<m; i++)
    {
        a[i]=i;
    }
    for (int i=m;i>1;i--)
    {
        start=out(m,a,start,k);
    }
    printf("%d\n",a[0]);
    return 0;
    }
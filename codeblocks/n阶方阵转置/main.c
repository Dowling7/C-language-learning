#include <stdio.h>
#define N 101
int main(){
    int m;
    int temp;
    int a[N][N];
    scanf("%d",&m);
    for(int i = 0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&temp);
            a[i][j] = temp;
        }
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<m;j++){
            if(j!=m-1)
            printf("%d ",a[j][i]);
            else
            printf("%d\n",a[j][i]);
        }
    }
    return 0;

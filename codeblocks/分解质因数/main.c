#include <stdio.h>
#include <stdlib.h>

int main()
{    int n;
printf("input:\n");
scanf("%d",&n);
for(int i=2; i<=n; i++){
    if(i==n){
    printf("%d\n",n);
    }
    while(i!=n){
            if(n%i==0){
        n=n/i;
        printf("%d\n",i);

    }else{
    break;
    }
    }
}
}


#include <stdio.h>
#include <windows.h>
//Õ·×ªÏà³ý·¨
int main()
{
    int x, y, t;
    scanf("%d %d", &x, &y);
    if(x<y)
    {
        t=x;
        x=y;
        y=t;
    }
    while(y!=0)
    {

        t=x%y;
        x=y;
        y=t;
    }
    printf("%d",x);
    system("pause");
    return 0;
}

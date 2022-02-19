#include <stdio.h>
#include <math.h>
//计算级数sinx在x=3处的值，精确到某一项的绝对值小于10^-4
int main()
{
   double x=3, result=0, e=10E-4, factor;
   double i=1;

   factor = x;
   while(fabs(facot)>=e){
    result+=factor;
    factor=factor*x/(2*i)*x/(2*i+1)*-1//每一项分开误差小
    ++i;
   }
   printf("sin(%.2f)=%.2f\n",x,result);

   return 0;
}

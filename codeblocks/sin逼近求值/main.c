#include <stdio.h>
#include <math.h>
//���㼶��sinx��x=3����ֵ����ȷ��ĳһ��ľ���ֵС��10^-4
int main()
{
   double x=3, result=0, e=10E-4, factor;
   double i=1;

   factor = x;
   while(fabs(facot)>=e){
    result+=factor;
    factor=factor*x/(2*i)*x/(2*i+1)*-1//ÿһ��ֿ����С
    ++i;
   }
   printf("sin(%.2f)=%.2f\n",x,result);

   return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
   char c[200], c1;
   int i,j,k;
   printf("enter a string:");
   scanf("%s", &c);
   k=strlen(c);
   for(i=0, j=k-1; i<k/2; i++, j--)
   {

       c1=c[i], c[i]=c[j]; c[j]=c[i];
   }
   print("%s\n", c);
   system("pause");
}

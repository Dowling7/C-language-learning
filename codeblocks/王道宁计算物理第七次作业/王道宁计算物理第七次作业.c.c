//第七章
//第3题
#include<stdio.h>
#include <stdlib.h>
int main(){
while(1){
    char* s;
    s=(char*)malloc(100);
    scanf("%s",s);
    int j=0;

    for (int i=0;i<100;i++){
        if (s[i]=='s') j++;
        }
    //printf("%d\n",j);
    if (j==0)    {printf("  %s\n",s);}
    if (j>0)    {printf("* %s\n",s);}


    //printf("%s\n",s);
    free(s);
}

    return 0;
}




//第5题
#include <stdio.h>
#include <string.h>
void yuan(char str[]){
    for(int i=0;i<strlen(str);i++){
        for(int j=0;j<strlen(str);j++){
            if((str[i]==str[j])&(i!=j))
            {
                str[i]=' ';}
        }
    }
    int p=0;
    for (int i=0;i<strlen(str);i++){
        if (str[i]!=' '){
            str[p]=str[i];
            p++;
        }
    }
    for (int i=0;i<strlen(str);i++){
        if (i>p) str[i]=' ';}
    for (int i = 0; i < strlen(str)-1; ++i) {
        int min = i;
        for (int j = i+1; j < strlen(str); ++j) {
            if (str[j] < str[min]) min = j;
        }
        if (i != min) {
            char temp1 = str[i];
            str[i] = str[min];
            str[min] = temp1;

        }
    }
}


int main() {
    char s1[] = "dddddddda";
    char s2[] = "321";
    yuan(s1);
    printf("顺序排列组成元素是%s\n",s1);
    return 0;
}



//第7题
#include<math.h>
#include<stdio.h>

double abc(double a,double b){
    //ln(x)为例
    double result=0,step=0.0000001;
    for(double i=a;i<=b;i=i+step){
        result+=log(i)*step;
    }
    return result;
}

int main(){
    printf("%f",abc(1,2));
    return 0;
}






//第10题
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
    char* words[]={"apple","banana","cat","duck"};
    int p=rand()%4;
    printf("%s\n",words[p]);
    char *word=words[p];
    while(1)
    {
        char d,dd;
        //printf("guess");
        scanf("%c%c",&d,&dd);
        int mm=0;

        for (int i=0;i<strlen(words[p]);i++){
            if (d==word[i]) {
                printf("在\n");
                mm++;
                break;
            }
        }

        if (mm==0) printf("不在\n");
        printf("123\n");
        char gu[100];
        scanf("%s",gu);
        if (!strcmp(gu,words[p])){
            printf("yes\n");
            break;
        }
        else printf("try again\n");
    }
    return 0;
}



//第13题
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
    char* a[100];
    for(int i=0; i<100;i++){
        scanf("%s",a[i]);
        printf("Next\n");
        char b[5]="break";
        if (strcmp(b,a[i])==0)  break;
        if (strlen(a[i])>80) break;
    }
    for(int i=0; i<100;i++){
        if (strlen(a[i])<=40) printf("%s\n",a[i]);
    }
    for(int i=0; i<100;i++){
        if (strlen(a[i])>40) printf("%s\n",a[i]);
    }
    return 0;
}




//第17题

#define max(a,b) (a)>(b)?(a):(b)
#include <stdio.h>
int main(){
    double a[]={5,0,1,2,3,4,5};
    //5x^5+4x^4+3x^3+2x^2+x
    double b[7]={4,0,0,2,2,3};
    //3x^4+2X^3+2x^2;

    //a+b
    double c[7];
    c[0]=max(a[0],b[0]);
    for (int i=1;i<7;i++){
        c[i]=a[i]+b[i];
    }
    for (int i=0;i<7;i++){
        printf("%.0f ",c[i]);
    }
    return 0;
}



#include <stdio.h>
#include "my.h"//��û������һ���ļ�
int main(int argc, char *argv[ ]){
printf("argc:%d\n",argc);
printf("argv1:%s\n",argv[0]);
printf("argv2:%s\n",argv[1]);
printf("argv3:%s\n",argv[2]);
printf("argv4:%s\n",argv[3]);

}


#include<stdio.h>
#define N 2
struct stu{
    char name[10];
    int num;
    int age;
    float score;
} boya[N], boyb[N], *pa, *pb;
int main(){
    FILE *fp;
    int i;
    pa=boya;
    pb=boyb;
    if( (fp=fopen("exam.txt","wt+")) == NULL ){
        puts("Fail to open file!");
    }
    //从键盘读入数据，保存到boya
    printf("Input data:\n");
    for(i=0; i<N; i++,pa++){
        scanf("%s %d %d %f", pa->name, &pa->num, &pa->age, &pa->score);   
    }
    pa = boya;
    //将boya中的数据写入到文件
    for(i=0; i<N; i++,pa++){
        fprintf(fp,"%s %d %d %f\n", pa->name, pa->num, pa->age, pa->score);   
    }
    //重置文件指针
    rewind(fp);
    //从文件中读取数据，保存到boyb
    for(i=0; i<N; i++,pb++){
        fscanf(fp, "%s %d %d %f\n", pb->name, &pb->num, &pb->age, &pb->score);
    }
    pb=boyb;
    //将boyb中的数据输出到显示器
    for(i=0; i<N; i++,pb++){
        printf("%s  %d  %d  %.1f\n", pb->name, pb->num, pb->age, pb->score);
    }
    fclose(fp);
    return 0;




#include <stdio.h>
#include <stdlib.h>

double det(double* , int );
int main(int argc, char const* argv[])
{
    int i, j, n ;
    double* a;
    printf("��������ʽ�Ľ���:");
    scanf("%d", &n);
    a = (double*)malloc(sizeof(double) * n * n);
    if(a== NULL){
        printf("û�п����ڴ�!\n");
        exit(0);
    }
    printf("����%d����;",n*n );
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%lf", a + i * n + j);
    printf("detA=%g\n", det(a, n));
    free(a);
    return 0;
}
double det(double* a, int N)//����a[N][N]
{
    int i, j, m, n, s, t, k = 1;
    double f = 1.0, c, x;
    for (i = 0, j = 0; i < N && j < N; i++, j++) {
        if (a[i * N + j] == 0) {//a[i][j]������Խ����Ƿ�Ϊ0
            for (m = i + 1; m < N && a[m * N + j] == 0; m++)//a[m][j]
                ;
            if (m == N)//ȫΪ0������ʽΪ0
                return 0;
            else
                for (n = j; n < N; n++) {//��������
                    c = a[i * N + n];//a[i][n]
                    a[i * N + n] = a[m * N + n];//a[i][n]=a[m][n]
                    a[m * N + n] = c;//a[m][n]
                }
            k = -k;
        }
        for (s = N - 1; s > i; s--) {//�б任������������ʽ
            x = a[s * N + j];//a[s][j]
            for (t = j; t < N; t++)
                a[s * N + t] -= a[i * N + t] * (x / a[i * N + j]);
        }
    }
    for (i = 0; i < N; i++)//a[i][i]
        f *= a[i * N + i];
    return k * f;

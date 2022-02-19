//----------------------------------------------------
//功能：求k×k矩阵的伴随矩阵
//入口参数：m是k×k矩阵首地址；矩阵行数 k；输出参数adj是伴随矩阵的入口地址
//返回值： 无
//----------------------------------------------------
　　void adjoint_m(double *m, double *adj, int k)
　　{
　　 int len = k * k;
　　 int count = 0;
　　 for (int i = 0; i < len; i++)
　　 {
　　 *(adj + count++) = algebraic_cofactor(m, i % k, i / k, k);
　　 }
　　}
　　

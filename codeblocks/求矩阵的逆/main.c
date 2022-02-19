
//----------------------------------------------------
//功能：求k×k矩阵的逆矩阵
//入口参数：m是k×k矩阵首地址；矩阵行数 k；输出参数inv是逆矩阵的入口地址
//返回值： 无
//----------------------------------------------------
　void inverse_matrix(double *raw, double *inv, int k)
　　{
　　 double det = determinant(raw, k); //求行列式
　　 if (det == 0)
　　 {
　　 cout << "矩阵不可逆" << endl;
　　 return;
　　 }
　　 adjoint_m(raw, inv, k); //求伴随矩阵
　　 int len = k * k;
　　 for (int i = 0; i < len; i++)
　　 *(inv + i) /= det;
　　}
　　

double algebraic_cofactor(double *p, int m, int n, int k)
　　{
　　 int len = (k - 1) * (k - 1);
　　 double *cofactor = new double[len];
　　
　　 int count = 0;
　　 int raw_len = k * k;
　　 for (int i = 0; i < raw_len; i++)
　　 if (i / k != m && i % k != n)
　　 *(cofactor + count++) = *(p + i);
　　
　　 double ret = determinant(cofactor, k - 1);
　　 if ((m + n) % 2)
　　 ret = -ret;
　　 delete[] cofactor;
　　 return ret;
　　}

//把矩阵第row行乘以k
void k_multiply(int columns, int matrix[ ], int row, int k){
    int t;
    for(int i = 0; i<columns; ++i){
      matrix[row * columns + i]*= k;
    }
}
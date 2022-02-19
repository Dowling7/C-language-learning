//把矩阵第b行的k倍加在第a行上
void k_add(int columns, int matrix[ ], int a, int b, int k){
    int t;
    for(int i=0; i<columns; ++i){
        matrix[a* columns + i]+= k * matrix[b * columns + i];
    }
}
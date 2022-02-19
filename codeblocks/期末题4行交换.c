//把第a行和第b行交换
void swap(int columns, int matrix[ ], int a, int b){
int t;
//执行循环，依次交换需要交换两行的对应列
for(int i =0; i<columns; ++i)
{
    t = matrix[a * columns + i];
    matrix[a * columns + i] = matrix[b * columns + i];
    matrix[b * columns + i] = t;
   }
}
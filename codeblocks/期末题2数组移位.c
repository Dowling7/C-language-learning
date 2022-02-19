void move(int arr[ ], int length){
    int hold =arr[length - 1];//int arr[ ]表示接受一个数组，length代表数组长度
    for (int i = length - 1; i>=1; --i ){//把最右端的元素预先保存
        arr[i] = arr[i -1];
    }
    arr[0] = hold;//把先前保存的最右端元素存放在最左端
}
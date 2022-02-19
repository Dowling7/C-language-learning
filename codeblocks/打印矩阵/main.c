void displayArray(int arr[ ], int length){
    for(int i=0; i<length; ++i){
        printf("%d%s", arr[i], i<length-1?"\t":"\n");
    }
    }

    void dispayMatrix(int matrix[ ], int lines, int columns){
    for(int vi=0; i<lines; i++){
        displayArray(matrix+i*columns, columns);
    }
    }

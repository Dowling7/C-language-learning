void multiply(int left_height, int right_width, int common_edge,
int left[ ], int right[ ], int result[ ]){
    int sum;
    for(int y = 0; y<left_height; ++y){
        for(int x=0; x<right_width; ++x){
            sum=0;
            for(int i=0; i<common_edge; ++i){
                sum += left[y*common_edge + i]*right[i*right_width + x];
            }
            result[y*right_width + x] = sum;
        }
    }
}
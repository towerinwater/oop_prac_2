int sum_diagonal(int array[4][4]){
    int res = 0;

    for(int row = 0; row < 4; row++){
        for(int col = row; col <= row;){
            res += array[row][col];
            break;
        }
    }

    return res;
}
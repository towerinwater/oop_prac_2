int is_identity(int array[10][10]){
    for(int row = 0; row < 4; row++){
        for(int col = row; col <= row;){
            if(array[row][col] != 1){
                return 0;
            }
            break;
        }
    }

    return true;

}
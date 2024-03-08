int is_identity(int array[10][10]) {
    for(int row = 0; row < 10; row++) { 
        for(int col = 0; col < 10; col++) {
            if(row == col && array[row][col] != 1) {
                return 0;
            } else if(row != col && array[row][col] != 0) { 
                return 0;
            }
        }
    }
    return 1;
}

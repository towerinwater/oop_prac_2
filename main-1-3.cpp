#include <iostream>

extern void count_digits(int array[4][4]);

int main(){
    int matrix[4][4];
    int i = 1;
    for(int row = 0; row < 4; row++){
        for(int col = 0; col < 4; col++){
            matrix[row][col] = i;
            i++;
        }
    }

    count_digits(matrix);
      
    return 0;
}
        
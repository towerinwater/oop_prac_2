#include <iostream>

extern int is_identity(int array[10][10]);

int main(){
    int matrix[10][10];
    int i = 1;
    for(int row = 0; row < 10; row++){
        for(int col = 0; col < 10; col++){
            matrix[row][col] = i;
            i++;
        }
    }

    std::cout << is_identity(matrix) << std::endl;
    return 0;
}

#include <iostream>
void count_digits(int array[4][4]){
    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(int row = 0; row < 4; row++){
        for(int col = 0; col < 4; col++){
            switch (array[row][col])
            {
            case 0:
                count[0]++;
                break;
            case 1:
                count[1]++;
                break;
            case 2:
                count[2]++;
                break;
            case 3:
                count[3]++;
            case 4:
                count[4]++;
                break;
            case 5:
                count[5]++;
                break;
            case 6:
                count[6]++;
                break;
            case 7:
                count[7]++;
                break;
            case 8:
                count[8]++;
                break;
            case 9:
                count[9]++;
                break;
            default:
                break;
            }
        }
    }

    for(int i = 0; i < 10; i++){
        std::cout << i << ":" << count[i] << ";";
    }
    std::cout << std::endl;
}
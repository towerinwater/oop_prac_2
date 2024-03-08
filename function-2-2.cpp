#include <cmath>
int binary_to_int(int binary_digits[], int numbers_of_digits){
    if(numbers_of_digits < 1){
        return -1;
    }

    int num = 0;
    int expo = numbers_of_digits - 1;
    for(int i = 0; i < numbers_of_digits; i++){
        num += pow(2, expo) * binary_digits[i];
        expo--;
    }
    return num;
}
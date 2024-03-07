#include <iostream>
extern int binary_to_int(int binary_digits[], int numbers_of_digits);

int main(){
    int arr[4] = {1,0,1,1};
    std::cout << binary_to_int(arr, 4) << std::endl;
    return 0;
}
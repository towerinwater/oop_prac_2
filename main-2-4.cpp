#include <iostream>

extern int sum_min_max(int integers[], int length);

int main(){
    int array[10] = {1, 728, 18, 298, -19, 18, 27, 722, 0, 18};
    std::cout << sum_min_max(array, 10) << std::endl;
    return 0;
}
#include <iostream>

extern int sum_if_palindrome(int integers[], int length);
extern bool is_paldindrome(int integers[], int length);

int main(){
    int arr_1[8] = {1, 2,3,4,5,6,7,8};
    int arr_2[9] = {1,2,3,4,99,1,2,3,4};
    int arr_3[10] = {1,2,3,4,5,5,4,3,2,1};
    int arr_4[9] = {1,2,3,4,5,4,3,2,1};
    
    std::cout << sum_if_palindrome(arr_1, 8) << std::endl;
    std::cout << sum_if_palindrome(arr_2, 9) << std::endl;
    std::cout << sum_if_palindrome(arr_3, 10) << std::endl;
    std::cout << sum_if_palindrome(arr_4, 9) << std::endl;

    return 0;
}

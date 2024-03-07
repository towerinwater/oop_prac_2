#include <iostream>
#include <string>
void print_binary_str(std::string decimal_number){
    int new_num = std::stoi(decimal_number);
    
    int binary = 0;
    int base = 1;

    while(new_num > 0){
        binary += (new_num % 2) * base;
        base *= 10;
        new_num /= 2;
    }

    std::cout << binary << std::endl;; 
}
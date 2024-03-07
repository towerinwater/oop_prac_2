#include <sstream>
int binary_to_int(int binary_digits[], int numbers_of_digits){
    std::stringstream ss;
    for(int i = 0; i < numbers_of_digits; i++) ss << binary_digits[i];

    int number;
    ss >> number;
    return number;
}
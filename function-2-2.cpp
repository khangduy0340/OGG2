#include <iostream>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits){
    int base_value = 1;
    int finNumber =0;
    for(int i = 0; i<number_of_digits;i++){
        finNumber += binary_digits[number_of_digits-1-i] * base_value;
        base_value *= 2;
    }

    return finNumber;
}
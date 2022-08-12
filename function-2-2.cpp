#include <iostream>
using namespace std;

int bin_to_int(int binary_digits[], int number_of_digits){
    int Base_value = 1;
    int Number =0;
    for(int i = 0; i<number_of_digits;i++){
        Number += binary_digits[number_of_digits-1-i] * Base_value;
        Base_value *= 2;
    }

    return Number;
}
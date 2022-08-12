#include <iostream>
using namespace std;

extern int bin_to_int(int binary_digits[], int number_of_digits);
int main(int argc, char *argv[])
{
    int Bin_array[] = {0,1,1,1,0,1};
    int No_digits = sizeof(Bin_array)/sizeof(Bin_array[0]);
    cout<< "The interger value is: " << bin_to_int(Bin_array,No_digits);
    return 0;
}
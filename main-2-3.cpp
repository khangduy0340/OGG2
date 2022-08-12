#include <iostream>
using namespace std;

extern int palindrome_sum(int integers[], int length);
extern bool is_array_palindrome(int integers[], int length);
extern int sum_integers(int integers[], int length);
int main(int argc, char *argv[])
{
    int Bin_array[] = {1,0,1,0,1};
    int No_digits = sizeof(Bin_array)/sizeof(Bin_array[0]);
    cout<< "The interger value is: " <<palindrome_sum(Bin_array,No_digits);
    return 0;
}
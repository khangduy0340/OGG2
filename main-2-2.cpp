#include <iostream>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);
int main(int argc, char *argv[])
{
    int array[] = {0,1,1,1,0,1};
    int n = sizeof(array)/sizeof(array[0]);
    printf("The interger value is: %d",binary_to_int(array,n));
    return 0;
}
#include <iostream>
using namespace std;

extern int sum_if_palindrome(int integers[], int length);
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
int main(int argc, char *argv[])
{
    int array[] = {1,0,0,1};
    int n = sizeof(array)/sizeof(array[0]);
    if(sum_if_palindrome(array,n)==1){
        printf("It is a palidrome array and the sum is %d",sum_array_elements(array, n));
        
        }
    else{
        printf("Not a palidrome array!");
        }
    
    return 0;
}
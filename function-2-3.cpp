#include <iostream> 
using namespace std;

bool is_array_palindrome(int integers[], int length){

int Check_array[length];
for(int i = 0;i<length;i++ ){
    if(integers[i]!=Check_array[length-1-i]){
        printf("Hello");
        return false;
    }
}
return true;
}

int sum_integers(int integers[], int length){
int  sum =0;
for(int i = 0;i<length;i++)
sum+=integers[i];
return sum;
}

int palindrome_sum(int integers[], int length){
if(length<=0){
    return -1;
}
if(is_array_palindrome){
   return sum_integers(integers,length);
}
return -2;
}
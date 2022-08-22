#include <iostream>
using namespace std;
extern void hexDigits(int *numbers,int length) ;
int main(){
    int array[10] = { 1,2,4,5,11,12,15,14,2,0};
    hexDigits(array,10);
}
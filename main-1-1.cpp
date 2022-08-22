#include <iostream>
using namespace std;

extern int* readNumbers();
extern void printNumbers(int* array,int length);

int main(){
    printNumbers(readNumbers(), 10);
    return 0 ;
}
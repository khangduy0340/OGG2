#include <iostream>
using namespace std;
extern bool equalsArray(int *numbers1,int *numbers2,int length);
int main(){
    int array[10] = { 1,2,4,5,11,12,15,14,2,0};
    int array2[10] = { 1,2,4,5,11,12,15,14,1,0};
     if(equalsArray(array,array2,10)){
        printf("Ok\n");
     };
}
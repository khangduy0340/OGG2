#include <iostream>
using namespace std;

int* readNumbers(){
int* array = new int[10];
for(int i =0;i<10;i++){
    std:cin >> array[i];

}
return array;
}

void printNumbers(int* array,int length){
for(int i =0;i<length;i++){
    cout << i << " "<< array[i] << endl;
}
}
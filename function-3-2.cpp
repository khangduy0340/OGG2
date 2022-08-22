#include <iostream>
using namespace std;

int *reverseArray(int *numbers1,int length) {
    int* backwardArray = new int[length];
    for(int i = 0;i<length;i++){
        backwardArray[i] = numbers1[length-i-1];
    }
    return backwardArray;
}
int* readNumbers(){
int* array = new int[10];
for(int i =0;i<10;i++){
    std:cin >> array[i];

}
return array;
}
bool equalsArray(int *numbers1,int *numbers2,int length) {
    if (length < 1) {
        return false;
    }
    for (int i = 0; i < length; i++)
    {
        if (numbers1[i] != numbers2[i]) {
            return false;
        }
    }
    return true;
    
}
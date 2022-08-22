#include <iostream>
using namespace std;

extern int* reverseArray(int *numbers1,int length);
extern int* readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main(){
    int* array = new int[10];
    array = readNumbers();
    int* revArray = new int[10];
    revArray = reverseArray(array,10);
    bool temp = equalsArray(array, revArray, 10);
    cout << temp << endl;

    delete(array);
    delete(revArray);
    return 0;
}
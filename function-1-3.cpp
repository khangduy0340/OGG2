#include <iostream>
using namespace std;
void copy_integers(int old_array[],int new_array[],int length) {
    
    int *a = old_array;
    int *b = new_array;
    for(int i =0;i<length;i++){
        *(b+i)=*(a+i);
        cout << *(b+i) <<endl;
    }
}
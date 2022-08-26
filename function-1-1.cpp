#include <iostream>
using namespace std;

int **pointer_array(int *vals, int len){
     int *newArray = new int[len];
     for(int i =0;i<len;i++){
        *(newArray+i) = *(vals+i);
     }
return **newArray;
}
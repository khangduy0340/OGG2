#include <iostream>

using namespace std;
extern void multiples_of_seven(int *nums,int length);
int main(){
int array_a[10]={1,2,21,7,14,49,98,45,9,21};
int *a = &array_a[0];
multiples_of_seven(a,10);
return 0;
}
#include <iostream>
using namespace std;
extern  void copy_doubles(double *old_array,double *new_array,int length) ;
int main() {
  double array_one[5] = {1.1, 2.1, 3.1, 4.1, 5.1};
  double array_two[5];
  double *a = array_one;
  double *b = array_two;
  copy_doubles(a, b, 5);
  return 0;
}
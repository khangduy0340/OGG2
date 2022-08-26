#include <iostream>
using namespace std;
extern int **pointer_array(int *vals, int len);
int main() {
  int vals[] = {1, 2, 3, 4, 5};
  int **val_ptrs = pointer_array(vals, 5); // pointer to pointer val_ptrs
  *(val_ptrs[2]) = 10;

  return 0;
}

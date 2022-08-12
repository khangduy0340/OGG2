#include <iostream>
using namespace std;

extern void print_matrix(int array[10][10]);
int main(int argc, char *argv[]) {
  int matrixA[10][10] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};
 
  
print_matrix(matrixA);
return 0;
}

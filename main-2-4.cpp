#include <iostream>
using namespace std;

extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
extern int sum_min_max(int integers[], int length);
int main(int argc, char *argv[]) {
  int array[] = {1, 2, 3, 4};
  int n = sizeof(array) / sizeof(array[0]);
  printf("The sum of min and max value is %d", sum_min_max(array, n));

  return 0;
}
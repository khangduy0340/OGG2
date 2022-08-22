
#include <iostream>

using namespace std;
extern int secondSmallestSum(int *nums,int length);

int main() {
  int array[10] = {31, -41, 59, 26, -53, 58, 97, -93, -23, 84};
  int *a = &array[0];
  printf("%d\n",secondSmallestSum(a, 10));

  return 0;
}
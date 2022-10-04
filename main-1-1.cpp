/**
 * A very simple function that adds two input argument numbers together.
 * Returns the sum of the two arguments.
 */
#include <iostream>
using namespace std;
int add(int lhs, int rhs) {
    return lhs + rhs;
}
int main (){

if (add(5, 10) != 15) {
   std::cout << "Test 1 failed!" << std::endl;
}
if (add(7, 4) != 11) {
   std::cout << "Test 2 failed!" << std::endl;
}
if (add(-4, -5) != -9) {
  std::cout << "Test 3 failed!" << std::endl;
}
if (add(0, 0) != 0) {
  std::cout << "Test 3 failed!" << std::endl;
}
if (add(-1, 1) != 0) {
  std::cout << "Test 3 failed!" << std::endl;
}
return 0;
}
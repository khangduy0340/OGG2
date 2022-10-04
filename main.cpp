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

std::cout << "Result: " << add(1, 2) << " Expected: 3" << std::endl;
if (add(1, 2) != 3) {
    std::cout << "Test 1 failed!" << std::endl;
}
if (add(1, 2) == 3) {
    std::cout << "Test passed!" << std::endl;
}

return 0;
}
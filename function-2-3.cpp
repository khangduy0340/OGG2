#include <iostream>
using namespace std;

bool is_palindrome(int integers[], int length) {
  int array[length];
 
  if (length < 0) {
    return false;
  } else if (length == 1) {
    return true;
  }

for (int i = 0; i < length; i++) {
  array[i] = integers[i];
  if (array[i] != integers[length - i - 1]) {
    return false;
  }
}
return true;
}

int sum_array_elements(int integers[], int length) {
  int sum = 0;
  if (length < 0) {
    return -1;
  }
  for (int i = 0; i < length; i++) {
    sum += integers[i];
  }
  return sum;
}
int sum_if_palindrome(int integers[], int length) {
  if (length < 0) {
    return -1;
  }
  if (is_palindrome(integers, length)) {
    return 1;
  } else {
    return -2;
  }
  return 10;
}

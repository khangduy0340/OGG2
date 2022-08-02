#include <iostream>
using namespace std;

int array_min(int integers[], int length) {
  int init_Num = integers[0];
  if (length <= 0) {
    return -1;
  }
  for (int i = 0; i < length; i++) {
    if (init_Num > integers[i]) {
      init_Num = integers[i];
    }
  }
  return init_Num;
}

int array_max(int integers[], int length) {
  int init_Num1 = integers[0];
  if (length <= 0) {
    return -1;
  }
  for (int i = 0; i < length; i++) {
    if (init_Num1 < integers[i]) {
      init_Num1 = integers[i];
    }
  }
  return init_Num1;
}

int sum_min_max(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }
  int min = array_min(integers, length);
  int max = array_max(integers, length);
  int sum = min + max;
  return sum;
}
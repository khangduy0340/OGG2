#include <iostream>

using namespace std;

int max_sub_sum(int *nums, int length) {
  int max_sum = INT8_MIN;
  for (int i = 0; i < length; i++) {
    int current_sum = 0;
    for (int j = i; j < length; j++) {
      current_sum += nums[j];
      if (max_sum < current_sum) {
        max_sum = current_sum;
     
      }
    }
  }
  return max_sum;
}
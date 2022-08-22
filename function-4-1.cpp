
#include <iostream>

using namespace std;

int secondSmallestSum(int *nums,int length) {
  int second_max=0;
  int max_sum = 0;
  for (int i = 0; i < length; i++) {
    int current_sum = 0;
    for (int j = i; j < length; j++) {
      current_sum += nums[j];
      if (max_sum <= current_sum) {
        second_max = max_sum;
        max_sum = current_sum;
     
      }
    }
  }
  return second_max;
}
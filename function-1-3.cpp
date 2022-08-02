#include <iostream>
using namespace std;

void count_digits(int array[4][4]) {
  int count_array[10] = {0};
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      switch (array[i][j]) {
        case 0:
          count_array[0]++;
          break;
        case 1:
          count_array[1]++;
          break;
        case 2:
          count_array[2]++;
          break;
        case 3:
          count_array[3]++;
          break;
        case 4:
          count_array[4]++;
          break;
        case 5:
          count_array[5]++;
          break;
        case 6:
          count_array[6]++;
          break;
        case 7:
          count_array[7]++;
          break;
        case 8:
          count_array[8]++;
          break;
        case 9:
          count_array[9]++;
          break;
      }
    }
  }
  for (int i = 0; i < 9; i++) {
    printf("%d:%d;", i, count_array[i]);
  }
  printf("%d:%d;\n", 9, count_array[9]);
}
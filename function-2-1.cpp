#include <iostream>
#include <string>

using namespace std;
void print_binary_str(std::string decimal_number) {
  int binArray[11];
  int FinArray[11];
  int number = stoi(decimal_number);
  int n = 0;
  while (number != 0) {
    binArray[n] = number % 2;
    n++;
    number = number / 2;
  }
  for (int i = 0; i < n; i++) {
    FinArray[i] = binArray[n - i];
    printf("%d", binArray[n - i - 1]);
  }
  printf("\n");
}
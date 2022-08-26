#include <iostream>
using namespace std;
extern int even_numbers_above(int vals[], int above, int length);

int main() {
  int vals[] = {1, 2, 3, 4, 5, 6, 7};
  int vals_length = 7;
  int res = even_numbers_above(vals, 3, vals_length);
  cout << even_numbers_above(vals, 3, vals_length) << endl;
  return 0;
}


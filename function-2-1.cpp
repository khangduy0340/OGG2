#include <iostream>
using namespace std;
int tax_bracket_lookup(int income) {
  int percentPaid = 0;
  if (income <= 10000) {
    percentPaid = 0;
  } else if (10000 < income <= 20000) {
    percentPaid = 10;
  } else if (20000 < income <= 50000) {
    percentPaid = 15;
  } else if (50000 < income <= 100000) {
    percentPaid = 20;
  } else if (income > 100000) {
    percentPaid = 30;
  }
  return percentPaid;
}
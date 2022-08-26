#include <iostream>
using namespace std;
int tax_bracket_lookup(int income) {
  if (income <= 10000) {
   return 0;
  } else if ((10000 < income) && (income <= 20000)) {
   return 10;
  } else  if ((20000 < income) && (income <= 50000)) {
    return 15;
  } else if ((50000 < income) && (income <= 100000)) {
    return 20;  
  } else if (income> 100000) {
    return 30;
  }
  return 0;
}
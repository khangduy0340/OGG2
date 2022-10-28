#include "Casual.h"
Casual::Casual(int payRate) {
  dayCount = 0;
  float hoursWorked[7] = {0, 0, 0, 0, 0, 0, 0};
}

void Casual::set_dayCount(int d) { dayCount = d; };
int Casual::get_dayCount() { return dayCount; };

void Casual::endWorkDay() {
  dayCount++;
  Casual::set_energyLevel(100);
}

void Casual::work(int mins) {
  for (int i = 0; i++; i < mins) {
    energyLevel -= 0.5;
    if (energyLevel <= 0) {
      break;
    }
  }
  if (dayCount >= 5) {
    Casual::hoursWorked[dayCount] = mins * 2;
  } else {
    Casual::hoursWorked[dayCount] = mins;
  }
}

float Casual::pay() {
  int total;
  for (int i = 0; i < 6; i++) {
    total += hoursWorked[i];
    hoursWorked[i]=0;
  }
  dayCount = 0;
  return total * payRate;
}

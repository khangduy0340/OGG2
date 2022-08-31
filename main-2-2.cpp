#include <iostream>
#include <string>

#include "Airplane.h"
#include "Person.h"

using namespace std;

int main() {
  Person p1(4399, "Harry");
  Person p2(4399, "Harhdorf");
  Person p3(4399, "Ha");

  Airplane aircft("CAP34535", p1, p2);
  cout << "Displaying Aircraft Details :" << endl;
  aircft.printDetails();
  cout << "\n\n" << endl;
  aircft.setPilot(p3);
  cout << "Displaying Aircraft Details :" << endl;
  aircft.printDetails();

  return 0;
}

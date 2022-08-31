#include "Wagon.h"

#include <iostream>
#include <string>

#include "Capybara.h"
using namespace std;

Wagon::Wagon() { count = 0; }
bool Wagon::addCapybara(Capybara newCapy) {
  if (count > 3) {
    return false;
  } else if (count == 0) {
    Caps[count] = newCapy;
    count++;
    return true;
  } else if (count == 1) {
    Caps[count] = newCapy;
    count++;
    return true;
  } else if (count == 2) {
    Caps[count] = newCapy;
    count++;
    return true;
  } else if (count == 3) {
    Caps[count] = newCapy;
    count++;
    return true;
  }
  return false;
};

void Wagon::emptyWagon() {
  for (int i = 0; i < count; i++) {
    Caps[i].~Capybara();
    count = 0;
  }
  cout << "Empty!" << endl;
};
void Wagon::printCapybaras() {
  cout << count << endl;
  for (int i = 0; i < count; i++)
    cout << "Capybara name: " << Caps[i].getName()
         << " Age: " << Caps[i].getAge() << endl;
}

// void Wagon::emptyWagon() { count = 0; };
Wagon::~Wagon(){};
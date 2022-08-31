#ifndef WAGON_H
#define WAGON_H
#include <string>

#include "Capybara.h"
using namespace std;

class Wagon {
 public:
  Wagon();  // create an empty wagonobject
  bool addCapybara(Capybara newCapy);  // adds a Capybara to the wagon, returns false if full
  void emptyWagon();      // remove all Capybaras from the wagon
  void printCapybaras();

  Capybara Caps[6];
  int count;  // print the name, a space, the age, then a new line
  ~Wagon();   // for each capybara in the order they were added
};

#endif

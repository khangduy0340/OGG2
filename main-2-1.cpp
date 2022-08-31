#include <iostream>
#include <string>

#include "Capybara.h"
#include "Wagon.h"
using namespace std;

int main() {
  Capybara Cap[6];
  Cap[0].setAge(20);
  Cap[0].setName("gin");
  Cap[1].setAge(30);
  Cap[1].setName("gon");
  Cap[2].setAge(40);
  Cap[2].setName("go");
  Cap[3].setAge(50);
  Cap[3].setName("gihi");
  Cap[4].setAge(50);
  Cap[4].setName("gigi");

  Wagon wagon;
  for (int i = 0; i < 5; i++) {
    int z = wagon.addCapybara(Cap[i]);
    if (z == 1) {
      cout << "Welcome" << endl;
    } else {
      cout << "It's full" << endl;
      break;
    }
  }
  wagon.printCapybaras();
  wagon.emptyWagon();

  return 0;
}

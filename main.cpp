#include <iostream>
#include <string>
#include "Airplane.h"
#include "Capybara.h"
#include "Person.h"
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
  Person p1(4399, "Harry");
  Person p2(4399, "Harhdorf");
  Person p3(4399, "Ha");
  {

Airplane aircft("CAP34535",p1,p2);
cout<<"Displaying Aircraft Details :"<<endl;
aircft.printDetails();
cout<<"\n\n"<<endl;
aircft.setPilot(p3);
cout<<"Displaying Aircraft Details :"<<endl;
aircft.printDetails();

  return 0;
}
}
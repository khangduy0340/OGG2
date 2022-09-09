
#include <iostream>
#include <string>
#include "Truck.h"
#include "Truck_yard.h"
using namespace std;

int main() {
  Truck_yard t1(3); 
  Truck c[3] = {Truck(3102, "A1"), Truck(3190, "A2"),
                Truck(3102, "A3")};
  for (int i = 0; i < 3; i++) {
    cout << "Add trucks:" <<endl;
    cout << t1.get_total_stock_count() << endl; 
    cout << t1.add_stock(c[i]) << endl;
    cout << endl;
  }
  cout << "Number of stock with code 3102 is: " << t1.get_stock_count(3102)<<endl;
  Truck *cTruck = t1.get_current_stock_list(); 
  cout << "Musician's Instrument and their Experience in orchestra : " << endl;
  for (int i = 0; i < t1.get_total_stock_count(); i++)
    cout << cTruck[i].get_brand_name() << " " << cTruck[i].get_brand_code()
         << endl;
  delete (cTruck);
  return 0;
}
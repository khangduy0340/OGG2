
#include <iostream>
#include <string>
#include "Truck.h"
#include "Truck_yard.h"
using namespace std;
Truck_yard::Truck_yard() {
  mCapacity = 0; 
  cCapacity = 0;
  cTruck = NULL; 
}
int Truck_yard::get_total_stock_count(){return cCapacity;};
int Truck_yard::get_stock_count(int code){
    int count = 0;
    for(int i =0;i<cCapacity;i++){
        if(cTruck[i].get_brand_code()==code)
        count++;
    }
    return count; 
}

Truck_yard::Truck_yard(int size)
{
    mCapacity = size;
    cCapacity = 0;
    cTruck = new Truck[size]; 
}
Truck* Truck_yard::get_current_stock_list(){return cTruck;};
bool Truck_yard::add_stock(Truck c) 
{
  if (cCapacity < mCapacity){
    cTruck[cCapacity] = c;
    cCapacity++;
    return true;
  }
  return false;
}
Truck_yard::~Truck_yard()
{
  if (cTruck != NULL) 
  delete[] cTruck;
};
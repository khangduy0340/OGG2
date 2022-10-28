
#include "Shop.h"

Shop::Shop()
{
  
  employee = new Employee*[5];
  for (int i = 0; i < 5; i++) {
      Manager* temp = new Manager(100);
      employee[i] = temp; 
    }
}

int Shop::get_count() { return count; }
void Shop::addEmployee(Employee* employee) {
      int k = Shop::get_count();
      employee[k] = *employee;   
 }
Employee** Shop::get_employees() { return employee; }
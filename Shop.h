#ifndef SHOP_H
#define SHOP_H .
#include <iostream>
#include <string>

#include "Casual.h"
#include "Employee.h"
#include "Manager.h"
using namespace std;

class Shop {
 private:
  int count;
  Employee** employee;
  static Shop* createShop(int authority);
 public:
  Shop();
  int get_count();
  void addEmployee(Employee* employee);
  Employee** get_employees();
};

#endif
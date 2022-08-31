#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person(int mySalary, string myName){

this->name = myName;
this->salary = mySalary;
}

void Person::setName(string myName){this->name = myName;};   // change the capybara's name
string Person::getName(){return this->name;};
void Person::setSalary(int mySalary){this->salary = mySalary;};        // change the capybara's age
int Person::getSalary(){return this->salary;};


#include <iostream>
#include <string>
#include "Capybara.h"

using namespace std;

Capybara::Capybara(){
name = "Unknown";
age = 0;
}

void Capybara::setName(string capyName){this->name = capyName;};   // change the capybara's name
string Capybara::getName(){return this->name;};
void Capybara::setAge(int capyAge){this->age = capyAge;};        // change the capybara's age
int Capybara::getAge(){return this->age;};

Capybara::~Capybara(){}


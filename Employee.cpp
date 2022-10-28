#include "Employee.h"
Employee::Employee(int payRate) {
  payRate = 0;
  energyLevel = 100;  // 100%
}

void Employee::takeABreak(int mins){
while(energyLevel <= 1){
     for(int i =0;i<mins;i++){
        energyLevel += 20;
     }
}
};

void Employee::set_payRate(int p){this->payRate=p;};
int Employee::get_payRate(){return payRate;};

void Employee::set_energyLevel(int l){this->energyLevel=l;};
int Employee::get_energyLevel(){return energyLevel;};
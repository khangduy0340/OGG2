#include "Manager.h"
Manager::Manager(int payRate):Employee(payRate) {
  daysWorked = 0;
  hoursWorked = 0;
  energyLevel = 100;
}


void Manager::set_daysWorked(int d) { daysWorked = d;};
int Manager::get_daysWorked() { return daysWorked;};    

void Manager::set_hoursWorked(int l){hoursWorked = l;};
float Manager::get_hoursWorked(){return hoursWorked;};

void Manager::work(int mins) {
  int eLev = Manager::get_energyLevel();
  int d = get_daysWorked(); 
  if(mins>=8*60){
  for(int i =0;i<mins;i++){
    eLev -= 0.25;
    if(eLev<=0){
        daysWorked++;
        break;
    }
  }
}
}

float Manager::pay() {
  int d = get_daysWorked();
  daysWorked = 0;
  hoursWorked = 0;
  cout << "Pay rate is: "<<payRate;
  return d*payRate;
}

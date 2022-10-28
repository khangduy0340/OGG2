#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include "Employee.h"
using namespace std;

class Manager:public Employee{
    protected:
        int daysWorked;
        float hoursWorked;
    public: 
        Manager();
        Manager(int payRate);
        
        void takeABreak(int mins);
        
        void work(int mins);
        float pay();
        
        void set_daysWorked(int p);
        int get_daysWorked();
        
        void set_hoursWorked(int l);
        float get_hoursWorked();

};
#endif
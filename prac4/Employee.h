#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee{
    protected:
        int payRate;
        float energyLevel;
    public: 
        Employee();
        Employee(int payRate);
        
        void takeABreak(int mins);
        
        virtual void work(int mins)=0;
        virtual float pay() = 0;
        
        void set_payRate(int p);
        int get_payRate();
        void set_energyLevel(int l);
        int get_energyLevel();

};
#endif
#ifndef CASUAL_H
#define CASUAL_H
#include <iostream>
#include "Employee.h"
using namespace std;

class Casual:public Employee {
    protected:
        int dayCount;
        float hoursWorked[7];
    public: 
        Casual();
        Casual(int payRate);
        
        void takeABreak(int mins);
        
        void work(int mins);
        float pay() = 0;
        
        void set_dayCount(int d);
        int get_dayCount();

        void endWorkDay();
    

};
#endif
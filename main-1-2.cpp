#include "Employee.h"
#include "Casual.h"
#include "Manager.h"

int main(){
    Manager M1(15);
    M1.set_daysWorked(4);
    cout << "Manager is paid: " << M1.pay();
}
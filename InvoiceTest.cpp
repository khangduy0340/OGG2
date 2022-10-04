/**
 * Adds the cost of a service to the current invoice in dollars.
 * Use only positive dollar amounts.
 */
#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;

int main(){
Invoice invoice("ABCD");
invoice.addServiceCost(10);
if (invoice.getDollarsOwed() != 10) {
    std::cout << "Test 1 failed!" << std::endl;
}


invoice.applyDiscount(0.1);
if (invoice.getDollarsOwed()!=9){
    std::cout << "Test 2 failed!" << std::endl;
}
cout << invoice.getDollarsOwed() << endl;
return 0;
}
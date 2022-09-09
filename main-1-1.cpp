#include <iostream>
#include <string>
#include "Truck.h"
using namespace std;

int main(){
    Truck t1(3000,"Tyler");
    cout << t1.get_brand_code() << t1.get_brand_name() << endl;
    return 0;
}
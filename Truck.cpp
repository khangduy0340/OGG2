#include <iostream>
#include "Truck.h"
#include <string>
using namespace std;

Truck::Truck(){
    code = 0;
    name = "";
}

Truck::Truck(int b_code,std::string b_name){
    this->code = b_code;
    this->name = b_name;
}

void Truck::set_brand_name(std::string bname){this->name=bname;};
string Truck::get_brand_name(){return name;};
void Truck::set_brand_code(int bcode){this->code=bcode;};
int Truck::get_brand_code(){return code;};

Truck::~Truck(){};

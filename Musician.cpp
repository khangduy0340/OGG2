#include <iostream>
#include <string>
#include "Musician.h"
using namespace std;

Musician::Musician(){
    istr = "none";
    yEx = 0;
}

Musician::Musician(std::string instrument,int experience){
    this->istr = instrument;
    this->yEx = experience;
}

void Musician::set_instrument(std::string istrus){this->istr = istrus;};
string Musician::get_instrument(){return istr;};
void Musician::set_experience(int Experience){this->yEx = Experience;};
int Musician::get_experience(){return yEx;};

Musician::~Musician(){};
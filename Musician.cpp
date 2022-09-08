#include <iostream>
#include <string>
#include "Musician.h"
using namespace std;
// Set a default musician
Musician::Musician(){
    istr = "none";
    yEx = 0;
}
// Get the information from private section
Musician::Musician(std::string instrument,int experience){
    this->istr = instrument;
    this->yEx = experience;
}
// Get and set value
void Musician::set_instrument(std::string istrus){this->istr = istrus;};
string Musician::get_instrument(){return istr;};
void Musician::set_experience(int Experience){this->yEx = Experience;};
int Musician::get_experience(){return yEx;};
// Deconstruct the default
Musician::~Musician(){};
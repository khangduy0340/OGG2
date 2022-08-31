
#include <iostream>
#include <string>
#include "Person.h"
#include "Airplane.h"

using namespace std;
Person::Person()
{
name = "Unknown";
salary = 20;
}

Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot)
{
this->cSign = callsign;
this->tPilot = thePilot;
this->cPilot = theCoPilot;
}


void Airplane::setPilot(Person thePilot){this->tPilot=thePilot;};
Person Airplane::getPilot(){return this->tPilot;};
void Airplane::setCoPilot(Person theCoPilot){this->cPilot=theCoPilot;};
Person Airplane::getCoPilot(){return this->cPilot;}

void Airplane::printDetails(){
    cout <<"Call sign: "<< cSign << endl;
    cout<<"Pilot name: " << tPilot.getName() << endl;
    cout<<"Pilot name: " << cPilot.getName() << endl;
}

Airplane::~Airplane(){};
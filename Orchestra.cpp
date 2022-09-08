#include "Orchestra.h"

#include <iostream>
#include <string>

#include "Musician.h"
using namespace std;

Orchestra::Orchestra() {
  mSize = 0; // Set max size current size and pointer member
  cSize = 0;
  members = NULL; 
}

Orchestra::Orchestra(int size)
{
    mSize = size;
    cSize = 0;
    members = new Musician[size]; // create a dynamic array with type is class Musician
}

int Orchestra::get_current_number_of_members(){return cSize;};
bool Orchestra::has_instrument(std::string instrument)
{
  for (int i = 0; i < cSize; i++){
    if (members[i].get_instrument() == instrument) 
    return true;
  }
  return false;
}

Musician* Orchestra::get_members(){return members;};
bool Orchestra::add_musician(Musician new_musician) // new_musician have type Musician
{
  if (cSize < mSize){
    members[cSize] = new_musician;
    cSize++;
    return true;
  }
  return false;
}
Orchestra::~Orchestra()
{
  if (members != NULL) 
  delete[] members;
}
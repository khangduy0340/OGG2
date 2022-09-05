#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <string>
using namespace std;
class Musician {
private: 
std::string istr;
int yEx;
public:
 Musician();                  // a default constructor 
// a constructor that takes the instrument played and the years of experience
Musician(std::string instrument, int experience);    
void set_instrument(std::string istrus);  
std::string get_instrument();   
void set_experience(int Experience); // returns the instrument played
int get_experience(); 
~Musician();      // returns the number of years experience
};
#endif 
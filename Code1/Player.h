#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;
class Player{
public:
Player();
virtual void move()=0; // set move as pure virtual
virtual std::string getMoves();
virtual char getMove(); //returns the most recent move made
virtual bool win(Player * opponent); //compares players’ moves to see who wins
char cMove; // create a value to capture the current move
~Player();
};
#endif
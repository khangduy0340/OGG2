#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

char Player::getMove(){
    return cMove;
}

bool Player::win(Player * opponent)
{
if((this->cMove)=='r'||(this->cMove=='R')&&((opponent->getMove()=='s')||
((opponent->getMove()=='S')))){cout<< "You won!"<<endl;return true;};
if((this->cMove)=='s'||(this->cMove=='S')&&((opponent->getMove()=='p')||
((opponent->getMove()=='P')))){cout<< "You won!"<<endl;return true;};
if((this->cMove)=='p'||(this->cMove=='P')&&((opponent->getMove()=='r')||
((opponent->getMove()=='R')))){cout<< "You won!"<<endl;return true;};
if((this->cMove!=opponent->getMove())){cout<<"Loss!"<<endl;return true;};
return false;
}




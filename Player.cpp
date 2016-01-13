#include "Player.h"
#include <iostream>
using namespace std;
ostream & operator << (ostream &os, const Player &player)
{
	os << player.getMoney();
	return os;
}

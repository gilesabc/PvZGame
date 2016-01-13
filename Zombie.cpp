#include "Zombie.h"
#include <iostream>
using namespace std;
ostream & operator << (ostream &os, const Zombie &zombie)
{
	os << "Damage: " << zombie.damage << " HP:";
	for (size_t i = 0; i < zombie.hp; ++i)
	{
		os << "*";
	}
	os << endl;
	return os;
}

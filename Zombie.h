#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <cstdlib>
#include <iostream>
class Zombie
{
	friend std::ostream & operator << (std::ostream &os, const Zombie &zombie);
public:
	int randomStep()const { return (rand() % 3) + 1; }
	void subHp(int sub) { hp -= sub; }
	int getPosition()const { return position; }
	void setPosition(int pos) { position = pos; }

private:
	const int damage = 15;
	int hp = 40;
	int position = 0;
	int id = 0;
};
std::ostream & operator << (std::ostream &os, const Zombie &zombie);
#endif // ZOMBIE_H
#pragma once

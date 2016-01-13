#ifndef MAP_H
#define MAP_H
#include "Plants.h"
#include "Zombie.h"
#include "Player.h"
#include "Land.h"
class Map
{
	Map() = default;
	Map(int zom_N, int land_N):
		zombieNum(zom_N),
		landNum(land_N),
		zombie(new Zombie[zom_N]),
		land(new Land[land_N]){}
	~Map()
	{
		delete[] zombie;
		delete[] land;
	}
public:
	void printMap(int player_pos)const;
	void setMap(int player_pos);
	void subZomNum(){--zombieNum;};
private:
	int zombieNum = 3;
	int landNum = 8;
	Zombie *zombie;
	Land *land;
};
#endif // MAP_H
#pragma once

#include "Map.h"
#include <iostream>
using namespace std;

void Map::printMap(int player_pos) const
{
	for (int land_index = 0; land_index < landNum; ++land_index)
	{
		cout << '[' << land_index << ']{' << land[land_index].getStat() << '}';
		land[land_index].getPlant()->Display();
	}

}

void Map::setMap(int player_pos)
{
	for (int land_index = 0; land_index < landNum; ++land_index)
	{
		if (player_pos == land_index)
		{
			land[land_index].setPlayer_pos();
		}
		else
		{
			land[land_index].clearPlayer_pos();
		}
			
		for (int zom_index = 0; zom_index < zombieNum; ++zom_index)
		{
			if (zombie[zom_index].getPosition() == land_index)
			{
				land[land_index].setZom_pos(zom_index);
			}
			else
			{
				land[land_index].clearZom_pos(zom_index);
			}
		}
	}
}

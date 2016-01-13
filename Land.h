#ifndef LAND_H
#define LAND_H
#include "Player.h"
#include "Plants.h"
#include "Zombie.h"

class Land
{
public:
	Land() = default;
	Land(Plant *thePlant) :
		plant(thePlant),
		stat({' '}) {}

	void setPlayer_pos() { stat[0] = '*'; }
	void clearPlayer_pos(){stat[0] = ' ';}
	void setZom_pos(int zom_pos) { stat[zom_pos + 1] = zom_pos; }
	void clearZom_pos(int zom_pos) { stat[zom_pos + 1] = ' '; }
	const char * getStat()const{ return stat; }
	const Plant* getPlant()const { return plant; }

private:
	char stat[11] = {' '};
	Plant *plant = nullptr;
};
#endif LAND_H

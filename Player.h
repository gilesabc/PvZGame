#ifndef PLAYER_H
#define PLAYER_H
#include <cstdlib>
#include <iostream>
class Player
{
public:
	int randomStep()const { return (rand() % 6) + 1; }
	void addMoney(int add) { money += add; }
	void subMoney(int sub) { money -= sub; }
	int getMoney()const { return money; }
	int getPosition()const { return position; }
	void setPosition(int pos) { position = pos; }

private:
	int money = 150;
	int position = 0;
};
std::ostream & operator << (std::ostream &os, const Player &player);
#endif // PLAYER_H

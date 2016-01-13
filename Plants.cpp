#include <iostream>
#include "Plants.h"

using namespace std;

int Plant::HarmLife(int h)
{
    if(life_-h > 0)
        life_ -= h;
    else life_=0;
    return life_;
}

void Plant::HealLife(int h)
{
    if(life_+h>maxlife_)
        life_=maxlife_;
    else life_+=h;
}

int CoinPlant::GetReward()
{
    if(visittime_==visit_)
    {
        visittime_=0;
        return reward_;
    }
    else
    {
        visittime_+=1;
        return 0;
    }
}

void Plant::Display() const
{
   cout << name_ << " $" << cost_ << " HP: " << life_ << " - gives ";
}

void CoinPlant::Display() const
{
    cout << "$" << reward_ << "every " << visit_ << "round(s) " << endl;
}

void HornPlant::Display() const
{
    cout << damage_ << " damage points " << endl;
}

void BombPlant::Display() const
{
    cout << life_ << " damage points " << endl;
}

void HealPlant::Display() const
{
    cout << "all your plants" << heal_ << " HP back" << endl;

}
int BombPlant::dead_bomb_=0;

#ifndef PLANTS_H_INCLUDED
#define PLANTS_H_INCLUDED

#include <string>

class Plant
{
public:
    Plant()=default;
    Plant(const std::string &name, int c, int l):name_(name), cost_(c), maxlife_(l) {}
    const std::string & Name() {return name_;}
    int Cost() {return cost_;}
    int MaxLife(){return maxlife_;}
    int Life(){return life_;}

    int HarmLife(int h);
    void HealLife(int h);

    virtual void Display() const;

protected:
    int life_=0;

private:
    const std::string name_;
    const int cost_;
    const int maxlife_;
};

class CoinPlant : public Plant
{
public:
    CoinPlant()=default;
    CoinPlant(const std::string &name, int c, int l, int v, int r):Plant(name, c, l),visit_(v),reward_(r){};
    int GetReward(); //假如還沒到次數就return 0
    virtual void Display() const;

private:
    const int visit_;
    const int reward_;
    int visittime_=0;
};

class HornPlant : public Plant
{
public:
    HornPlant()=default;
    HornPlant(const std::string &name, int c, int l, int d):Plant(name, c, l),damage_(d){};
    int Damage(){return damage_;}
    virtual void Display() const;

private:
    const int damage_;
};

class BombPlant : public Plant
{
public:
    BombPlant()=default;
    BombPlant(const std::string &name, int c, int l):Plant(name, c, l){};
    ~BombPlant() {dead_bomb_+=1;}
    int DeadBombNum(){return dead_bomb_;}
    virtual void Display() const;

private:
    static int dead_bomb_;

};


class HealPlant : public Plant
{
public:
    HealPlant()=default;
    HealPlant(const std::string &name, int c, int l, int h):Plant(name, c, l),heal_(h){};
    int Heal(){return heal_;}
    virtual void Display() const;

private:
    const int heal_;
};


#endif // PLANTS_H_INCLUDED

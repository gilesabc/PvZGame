#include<iostream>
#include<fstream>
#include<stdlib.h>
#include"Plants.h"
#include"Zombie.h"
#include"Player.h"
#include<time.h>
using namespace std;
void Rules()
{
    cout<<"==============================================================================="<<endl
        <<"Plants vs. Zombies Rule:"<<endl<<endl
        <<"How to win:"<<endl
        <<" <1> All zombies are dead."<<endl
        <<" <2> At least one the plant is live."<<endl
        <<" <3> The number of dead bomb plants cannot exceed the number of zombie."<<endl<<endl
        <<"How to lose:"<<endl
        <<"All plants are dead."<<endl
        <<"===============================================================================";
}
int main()
{
    cout<<"----------------------------"<<endl
        <<"|    Plants vs. Zombies     |"<<endl
        <<"----------------------------"<<endl
        <<"Number of lands on the map <1-10,default: 8>...>";
    int landnum;
    cin>>landnum;
    cout<<"Number of zombies on the map <1-10,default 3>...>";
    int zombienum;
    cin>>zombienum;
    ifstream plantfile;
    string filename="plants.txt";
    plantfile.open(filename.c_str());
    if(plantfile==0)cout<<"Can't find plants.txt"<<endl;
    else
    {
        Plant *p[]
        char symbol=' ';
        while(plantfile.get(symbol))
        {
            string name;
            char tmp;
            int cost,life;
            switch(symbol)
            {
            case 'C':
                int pass,reward;
                plantfile>>name>>tmp>>cost>>life>>pass>>reward;
                CoinPlant(name,cost,life,pass,reward);
                break;
            case 'S':
                int damage;
                plantfile>>name>>tmp>>cost>>life>>damage;
                HornPlant(name,cost,life,damage);
                break;
            case 'B':
                plantfile>>name>>tmp>>cost>>life;
                BombPlant(name,cost,life);
                break;
            case 'H':
                int heal;
                plantfile>>name>>tmp>>cost>>life>>heal;
                HealPlant(name,cost,life,heal);
                break;
            }
        }
    }
    Rules();
    cout<<"-----------------------------------------"<<endl;
    cout<<"========================================="<<endl;
//    for(int i=0; i<plantkinds; ++i)
//    {
//
//    }
    system("pause");
    system("cls");
    Player p;
    cout<<"Player $"<<p<<":     Enter your choice<4 to give up, default: 4>...>";
    int action;
    cin>>action;


    return 0;
}

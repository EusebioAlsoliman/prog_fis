// https://www.instagram.com/reel/CwsV5o8NdgJ/?igsh=MWtlcmJnamx0anV5aA==

#include<iostream>

using namespace std;

class Player
{
    public:
    int vida = 1000;
};

class Weapon
{
    public:
    int damage;
    int ammo;
    void Attack(Player Jugador){
        Jugador.vida-=damage;
    } 
};

int main()
{
    Weapon ak_47;
    ak_47.ammo = 90;
    ak_47.damage = 10;

    return 0;
}

#pragma once
#include <iostream>
using namespace std;


class npc
{
 protected:
	int health;
	int armour;
	int speed;

 public:
	 npc();
	 npc(int health, int armour, int speed);

	 virtual void PrintName() { cout << "Generic npc"; } 
	 // using virtual means that the function can be overriden in other classes

	int getHealth();
	int getArmour();
	int getSpeed();

	void setHealth(int numHealth);
	void setArmour(int numArmour);
	void setSpeed(int numSpeed);

};
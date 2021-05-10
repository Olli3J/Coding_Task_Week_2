#include "npc.h"


npc::npc() {
	health = 50;
	armour = 30;
	speed = 70;
}


int npc::getHealth() {
	return health;
}

int npc::getArmour() {
	return armour;
}

int npc::getSpeed() {
	return speed;
}

	//Health
void npc::setHealth(int numHealth) {
	if (numHealth >= 0) {
		health = numHealth;
	}
	else
	{
		health = 0;
	}
}

void npc::setArmour(int numArmour) {
	if (numArmour >= 0) {
		armour = numArmour;
	}
	else
	{
		armour = 0;
	}
}

void npc::setSpeed(int numSpeed) {
	if (numSpeed >= 0) {
		speed = numSpeed;
	}
	else
	{
		speed = 0;
	}
}


		
#pragma once
#include "npc.h"

class Ollie: public npc // this class inherits from npc class
{
public:
	Ollie();
	bool Mage() { return true; };
	virtual void PrintName() override { cout << "Generic npc"; }
};

#pragma once
#include "npc.h"
class John : public npc // this class inherits from npc class
{
public:
	John();

	bool IsABoss() { return true; };

	virtual void PrintName() override { cout << "Generic npc"; }
};


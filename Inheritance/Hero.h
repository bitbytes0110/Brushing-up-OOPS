#pragma once

#include "Player.h"

class Hero : public Player
{

public:
	int tripleValue;
	Hero();
	Hero(int x);
	Hero(int x, int y);
	~Hero();
};


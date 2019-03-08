#pragma once

#include "Person.h"

class Player : public Person
{
public:
	int doubleValue;

	Player();
	Player(int x);
	~Player();
};


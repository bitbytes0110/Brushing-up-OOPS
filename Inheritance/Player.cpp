#include "pch.h"
#include "Player.h"


Player::Player()
{
	cout << "Player constructor" << endl;
}

Player::Player(int x):Person(x),doubleValue(x*2)
{
	cout << "INT Player constructor" << endl;
}


Player::~Player()
{
	cout << "Player destructor" << endl;
}

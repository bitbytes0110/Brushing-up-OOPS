#include "pch.h"
#include "Hero.h"


Hero::Hero()
{
	cout << "Hero constructor" << endl;
}

Hero::Hero(int x) :Player(x), tripleValue(x * 3)
{
	cout << "INT Hero constructor" << endl;
}

Hero::Hero(int x, int y) : tripleValue(x * 3)
{
	cout << "INT INT Hero constructor" << endl;
}


Hero::~Hero()
{
	cout << "Hero destructor" << endl;
}

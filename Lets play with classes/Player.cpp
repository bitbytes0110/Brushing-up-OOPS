#include "pch.h"
#include "Player.h"

Player::Player(string playerName, int playerHealth, int playerXP)
	:name{ playerName }, health{ playerHealth }, xp{playerXP}
{
	cout << "Delegated constructor called" << endl;

}

Player::Player(const Player &source)
: name{ source.name}, health{ source.health }, xp{ source.xp}
{
	cout << "We made a copy of  " << source.name << endl;

}

Player::~Player()
{
	cout << "Destructor called for " <<name<< endl;
}

string Player::getName()
{
	return name;
}

int Player::getHealth()
{
	return health;
}

int Player::getXp()
{
	return xp;
}

bool Player::setName(string playerName)
{
	name = playerName;
	return true;
}

bool Player::setHealth(int playerHealth)
{
	health = playerHealth;
	return true;
}

bool Player::setXp(int playerXP)
{
	xp = playerXP;
	return true;
}


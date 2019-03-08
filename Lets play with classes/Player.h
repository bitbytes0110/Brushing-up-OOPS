#pragma once

#include <iostream>
#include <string>

using namespace std;

class Player
{

private:
	string name;
	int health;
	int xp;

public:
	Player(string playerName = "None", int playerHealth = 0, int playerXP = 0);
	Player(const Player &source);
		


	string getName();
	int getHealth();
	int getXp();
	bool setName(string playerName);
	bool setHealth(int playerHealth);
	bool setXp(int playerXP);

	~Player();
};


// Lets play with classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

#include "Player.h"

using namespace std;

void printPlayer(Player player);

int main()
{
    std::cout << "Lets play with classes!\n"; 

	Player hero("Thalaivar",100,1000 );
	printPlayer(hero);

	return 0;
}

void printPlayer(Player player)
{
	cout << "Player Name : " << player.getName()<<endl;

}


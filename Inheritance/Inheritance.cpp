// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Hero.h"

using namespace std;

int main()
{
    cout << "Inheritance!\n"<<endl;
	//Player myPlayer;

	Hero myHero(4,5);
	myHero.name = "Vijay";
	myHero.value = 4;
	myHero.doubleValue = 8;
	myHero.tripleValue = 12;


	return 0;

}

// showStatic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void showStatic();

int main()
{
    std::cout << "Hello World!\n";
	for (int i = 0; i < 5; i++)
	{
		showStatic();
	}
}

void showStatic()
{
	static int statNum= 0;

	cout << "statNum is " << statNum <<endl;
	++statNum;

}

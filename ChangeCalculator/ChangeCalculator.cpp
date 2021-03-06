// ChangeCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Change Calculator\n";
	
	int cents{ 0 };
	cout << "Enter an amount in cents : ";
	cout << "\nYou can provide change for this change as follows: ";
	cin >> cents;

	const int dollar{ 100 };
	const int quarter{ 25 };
	const int dime{ 10 };
	const int nickel{ 5 };
	const int penny{ 1 };

	int nDollars{}, nQuarter{}, nDime{}, nNickel{}, nPenny{};

	nDollars = cents / dollar;
	cents %= dollar;

	nQuarter = cents / quarter;
	cents %= quarter;

	nDime = cents / dime;
	cents %= dime;

	nNickel = cents / nickel;
	cents %= nickel;

	nPenny = cents;

	cout << "dollars\t: "	<< nDollars << endl;
	cout << "quarters: "	<< nQuarter << endl;
	cout << "dimes\t: "		<< nDime << endl;
	cout << "nickels\t: "	<< nNickel << endl;
	cout << "pennies\t: "	<< nPenny << endl;

	return 0;
}


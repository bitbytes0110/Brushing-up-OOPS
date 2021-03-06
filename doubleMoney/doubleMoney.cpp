// doubleMoney.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

double a_penny_doubled_everyday(int n, double amount = 0.01);
int nDays;

int main()
{
    std::cout << "Double Money!\n"; 
	nDays = 18;
	
	double total_amount = a_penny_doubled_everyday(nDays);
	cout << "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;
	
	return 0;
}

double a_penny_doubled_everyday(int n, double amount) 
{
	if (n <= 1)
		return amount;
	return a_penny_doubled_everyday(n - 1) * 2;
}



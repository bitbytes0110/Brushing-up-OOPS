#pragma once
#include "Account.h"


class SavingsAccount :
	public Account
{
	friend ostream &operator<<(ostream &os, const SavingsAccount & account);
private:
	static constexpr const char * def_name = "Unnamed Savings Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_int_rate = 0.0;
public:
	double int_rate;
public:
	SavingsAccount(string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
	bool deposit(double amount);

};


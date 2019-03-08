#pragma once
#include<iostream>
#include<string>
#include "I_Printable.h"

#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

using namespace std;


class Account:public I_Printable
{
private:
	static constexpr const char * def_name = "Unnamed Account";
	static constexpr double def_balance = 0.0;
public:
	string name;
	double balance;
public:
	Account(string name = def_name, double balance = def_balance);

	virtual bool deposit(double amount) = 0;
	virtual bool withdraw(double amount) = 0;
	double get_balance()const;
	virtual void print(ostream &os) const =0;
	virtual ~Account() = default;
};


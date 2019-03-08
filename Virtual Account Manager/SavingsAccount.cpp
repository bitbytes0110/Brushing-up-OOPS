#include "pch.h"
#include "SavingsAccount.h"


SavingsAccount::SavingsAccount(string name, double balance, double int_rate)
	:Account(name, balance), int_rate(int_rate)
{

}

bool SavingsAccount::deposit(double amount)
{
	amount += amount * (int_rate / 100);
	return Account::deposit(amount);

}

bool SavingsAccount::withdraw(double amount)
{
	return Account::deposit(amount);
}

void SavingsAccount::print(ostream &os) const
{
	os << "[Savings Account: " << name << ": " << balance << "," << int_rate << "%]";
}


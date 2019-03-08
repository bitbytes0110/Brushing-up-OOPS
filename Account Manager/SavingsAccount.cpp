#include "pch.h"
#include "SavingsAccount.h"


SavingsAccount::SavingsAccount(string name, double balance, double int_rate)
	:Account(name,balance), int_rate(int_rate)
{

}

bool SavingsAccount::deposit(double amount)
{
	amount += amount * (int_rate / 100);
	if (amount < 0)
		return false;
	else
	{
		balance += amount;
		return true;
	}
}

ostream &operator<<(ostream &os, const SavingsAccount &account)
{
	os << "[Account: " << account.name << ": " << account.balance << "," << account.int_rate << "%]";
	return os;
}
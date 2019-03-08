#include "pch.h"
#include "CheckingsAccount.h"


CheckingsAccount::CheckingsAccount(string name, double balance, double int_rate)
	:Account(name, balance), fee(int_rate)
{

}

bool CheckingsAccount::withdraw(double amount)
{
	amount += fee;
	return Account::withdraw(amount);
}

ostream &operator<<(ostream &os, const CheckingsAccount &account)
{
	os << "[Account: " << account.name << ": " << account.balance << "," << account.fee << "$]";
	return os;
}
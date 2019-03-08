#include "pch.h"
#include "CheckingsAccount.h"


CheckingsAccount::CheckingsAccount(string name, double balance, double int_rate)
	:Account(name, balance), fee(int_rate)
{

}

bool CheckingsAccount::deposit(double amount)
{
	return Account::deposit(amount);
}

bool CheckingsAccount::withdraw(double amount)
{
	amount += fee;
	return Account::withdraw(amount);
}

void CheckingsAccount::print(ostream &os) const
{
	os << "[Checkings Account: " << name << ": " << balance << "," << fee << "$]";
}

//ostream &operator<<(ostream &os, const CheckingsAccount &account)
//{
//	os << "[Account: " << account.name << ": " << account.balance << "," << account.fee << "$]";
//	return os;
//}
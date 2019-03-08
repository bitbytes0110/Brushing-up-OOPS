#include "pch.h"
#include "Account.h"


Account::Account(string name, double balance)
	:name(name), balance(balance)
{
	if (balance < 0)
			throw IllegalBalanceException();
}

bool Account::deposit(double amount)
{
	if (amount < 0)
		return false;
	else
	{
		balance += amount;
		return true;
	}
}

bool Account::withdraw(double amount)
{
	if (balance - amount >= 0)
	{
		balance -= amount;
		return true;
	}
	else
		throw InsufficientFundsException();
}

//void Account::print(ostream &os) const
//{
//	os << "[Account: " << name << ": " << balance << "]";
//}

double Account::get_balance() const
{
	return balance;
}

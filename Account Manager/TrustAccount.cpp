#include "pch.h"
#include "TrustAccount.h"

TrustAccount::TrustAccount(string name, double balance, double int_rate)
	:SavingsAccount(name, balance, int_rate), nWithdrawals(0)
{
	
}

bool TrustAccount::deposit(double amount)
{
	if (amount >= bonus_threshold)
	{
		amount += bonus_amount;
	}
	return SavingsAccount::deposit(amount);
}

bool TrustAccount::withdraw(double amount)
{
	if ((amount >= max_withdraw_percent * balance) || (nWithdrawals >= max_withdrawals))
	{
		return false;
	}
	else
	{
		++nWithdrawals;
		return SavingsAccount::withdraw(amount);
	}
}

ostream &operator<<(ostream &os, const TrustAccount &account)
{
	os << "[Account: " << account.name << ": " << account.balance << "," << account.int_rate << "%, withdrawals :"<<account.nWithdrawals<<"]";
	return os;
}

int TrustAccount::getNumberOfWithdrawals()
{
	return nWithdrawals;
}
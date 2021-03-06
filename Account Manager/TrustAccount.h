#pragma once
#include "SavingsAccount.h"
class TrustAccount :
	public SavingsAccount
{
	friend ostream &operator<<(ostream &os, const TrustAccount & account);
private:
	static constexpr const char * def_name = "Unnamed Trust Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_int_rate = 0.0;
	static constexpr double bonus_amount = 50.0;
	static constexpr double bonus_threshold = 5000.0;
	static constexpr int max_withdrawals= 3;
	static constexpr double max_withdraw_percent =0.2;
public:
	int nWithdrawals;
public:
	TrustAccount(string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
	bool deposit(double amount);
	bool withdraw(double amount);
	int getNumberOfWithdrawals();

};


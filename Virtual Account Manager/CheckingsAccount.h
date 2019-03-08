#pragma once
#include "Account.h"
class CheckingsAccount :
	public Account
{
	//friend ostream &operator<<(ostream &os, const CheckingsAccount & account);
private:
	static constexpr const char * def_name = "Unnamed Checkings Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_fee = 1.5;
protected:
	double fee;
public:
	CheckingsAccount(string name = def_name, double balance = def_balance, double fee = def_fee);
	virtual bool deposit(double amount) override;
	virtual bool withdraw(double amount) override;
	virtual void print(ostream &os)const override;
	virtual ~CheckingsAccount() = default;
};


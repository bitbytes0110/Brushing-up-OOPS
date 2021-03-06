// Virtual Account Manager.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include <iostream>
#include <vector>
#include "SavingsAccount.h"
#include "CheckingsAccount.h"
#include "TrustAccount.h"
#include "Accounts_Util.h"

int main()
{


	cout.precision(2);
	cout << fixed;

	// Account frank{"Frank", 5000};         // should not compile
	   // cout << frank << endl;

	CheckingsAccount frank{ "Frank", 5000 };
	cout << frank << endl;

	Account *trust = new TrustAccount("James");
	cout << *trust << endl;

	Account *p1 = new CheckingsAccount("Larry", 10000);
	Account *p2 = new SavingsAccount("Moe", 1000);
	Account *p3 = new TrustAccount("Curly");
	
	vector<Account *> accounts{ p1,p2,p3 };
	display(accounts);
	deposit(accounts, 1000);
	withdraw(accounts, 2000);

	try
	{
		unique_ptr<Account> myAccount = make_unique<CheckingsAccount>("Anand", -2000);
	}

	catch (IllegalBalanceException &ex)
	{
		cerr << ex.what() << endl;
	}
	catch (InsufficientFundsException &ex)
	{
		cerr << ex.what() << endl;
	}
	
	try
	{
		unique_ptr<Account> RupiAccount = make_unique<CheckingsAccount>("Rupi", 2000);
		RupiAccount->withdraw(1500);
		cout << RupiAccount << endl;
		RupiAccount->withdraw(1000);
		cout << RupiAccount << endl;
	}

	catch (IllegalBalanceException &ex)
	{
		cerr << ex.what() << endl;
	}
	catch (InsufficientFundsException &ex)
	{
		cerr << ex.what() << endl;
	}

	display(accounts);

	delete p1;
	delete p2;
	delete p3;


	return 0;
	
}


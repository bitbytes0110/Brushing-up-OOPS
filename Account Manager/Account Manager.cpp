// Account Manager.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include <iostream>
#include <vector>
#include "SavingsAccount.h"
#include "CheckingsAccount.h"
#include "TrustAccount.h"
#include "Account_Util.h"

int main()
{
	cout.precision(2);
	cout << fixed;

	// Accounts
	vector<Account> accounts;
	accounts.push_back(Account{});
	accounts.push_back(Account{ "Larry" });
	accounts.push_back(Account{ "Moe", 2000 });
	accounts.push_back(Account{ "Curly", 5000 });

	display(accounts);
	deposit(accounts, 1000);
	withdraw(accounts, 2000);

	// Savings 

	vector<SavingsAccount> sav_accounts;
	sav_accounts.push_back(SavingsAccount{});
	sav_accounts.push_back(SavingsAccount{ "Superman" });
	sav_accounts.push_back(SavingsAccount{ "Batman", 2000 });
	sav_accounts.push_back(SavingsAccount{ "Wonderwoman", 5000, 5.0 });

	display(sav_accounts);
	deposit(sav_accounts, 1000);
	withdraw(sav_accounts, 2000);


	// Checking 

	vector<CheckingsAccount> che_accounts;
	che_accounts.push_back(CheckingsAccount{});
	che_accounts.push_back(CheckingsAccount{ "Kirk" });
	che_accounts.push_back(CheckingsAccount{ "Spock", 2000 });
	che_accounts.push_back(CheckingsAccount{ "Bones", 5000});

	display(che_accounts);
	deposit(che_accounts, 1000);
	withdraw(che_accounts, 2000);

	// Trust
	vector<TrustAccount> tru_accounts;
	tru_accounts.push_back(TrustAccount{});
	tru_accounts.push_back(TrustAccount{ "Athos",10000,5.0 });
	tru_accounts.push_back(TrustAccount{ "Porthos", 20000, 4.0 });
	tru_accounts.push_back(TrustAccount{ "Aramis", 30000 });

	display(tru_accounts);
	deposit(tru_accounts, 1000);
	withdraw(tru_accounts, 3000);
	
	for (int i = 0; i < 5; i++)
	{
		withdraw(tru_accounts, 1000);
	}
	return 0;
}


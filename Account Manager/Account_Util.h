#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingsAccount.h"
#include "TrustAccount.h"

// Utility helper functions for Account class

void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

// Utility helper functions for Savings Account class

void display(const std::vector<SavingsAccount> &accounts);
void deposit(std::vector<SavingsAccount> &accounts, double amount);
void withdraw(std::vector<SavingsAccount> &accounts, double amount);

// Utility helper functions for Checkings Account class

void display(const std::vector<CheckingsAccount> &accounts);
void deposit(std::vector<CheckingsAccount> &accounts, double amount);
void withdraw(std::vector<CheckingsAccount> &accounts, double amount);

// Utility helper functions for Trust Account class

void display(const std::vector<TrustAccount> &accounts);
void deposit(std::vector<TrustAccount> &accounts, double amount);
void withdraw(std::vector<TrustAccount> &accounts, double amount);
#endif
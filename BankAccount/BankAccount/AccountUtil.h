#pragma once
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"

//Utility helper function for Account and SavingsAccount Class

void display(const std::vector<Account>& account);
void deposit(std::vector<Account>& account, double amount);
void withdraw(std::vector<Account>& account, double amount);

void display(const std::vector<SavingsAccount>& s_account);
void deposit(std::vector<SavingsAccount>& s_account, double amount);
void withdraw(std::vector<SavingsAccount>& s_account, double amount);

void display(const std::vector<CheckingAccount>& checking_account);
void deposit(std::vector<CheckingAccount>& checking_account, double amount);
void withdraw(std::vector<CheckingAccount>& checking_account, double amount);

void display(const std::vector<TrustAccount>& trust_account);
void deposit(std::vector<TrustAccount>& trust_account, double amount);
void withdraw(std::vector<TrustAccount>& trust_account, double amount);
// BankAccount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include "AccountUtil.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{ "Larry" });
    accounts.push_back(Account{ "Moe", 2000 });
    accounts.push_back(Account{ "Curly", 5000 });

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

    //Checking

    vector<CheckingAccount> checks;
    checks.push_back(CheckingAccount{});
    checks.push_back(CheckingAccount{ "Superman" });
    checks.push_back(CheckingAccount{ "Batman", 2000 });
    checks.push_back(CheckingAccount{ "Wonderwoman", 5000 });

    display(checks);
    deposit(checks, 1000);
    withdraw(checks, 2000);



    return 0;
}


 
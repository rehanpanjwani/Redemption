#pragma once
#include <iostream>
#include <string>
#include "Account.h"
class CheckingAccount : public Account
{
	friend std::ostream &operator<<(std::ostream& os, CheckingAccount& c_acc);
private :
	static constexpr const char* def_name = "Unnamed Checking Account";
	static constexpr double def_balance = 0.0;
	static constexpr double withrawal_fee = 1.50;

public :
	CheckingAccount(std::string name = def_name, double balance = def_balance);
	bool withdraw(double amount);
};


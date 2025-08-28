#pragma once
#include "SavingsAccount.h"
class TrustAccount : public SavingsAccount
{
	friend std::ostream& operator<<(std::ostream& os, const TrustAccount& trust_account);

private :
	static constexpr const char* def_name = "Unnamed Trust Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_intrest_rate = 0.0;
	int number_of_withdrawals = 3;

public :
	TrustAccount(std::string name = def_name, double balance = def_balance, double int_rate = def_intrest_rate);
	bool deposit(double amount);
	bool withdraw(double amount);
};


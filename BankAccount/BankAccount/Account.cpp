#include "Account.h"


Account::Account(std::string name, double balance)
	:name{ name }, balance{ balance } {
}



bool Account::deposit(double amount)
{
	if (amount < 0) {
		std::cout << "[[Invalid Amount]]";
		std::cout << "  [[" << amount << " is invalid]]\n" << std::endl;
		return false;
	}
	else {
		this->balance += amount;
		return true;
		}
}



bool Account::withdraw(double amount)
{
	if ((this->balance - amount) < 0 || amount < 0) {
		std::cout << "No sufficient Funds or Amount is less than 0" << std::endl;
		return false;
	}
	else {
		this->balance -= amount;
		return true;
		}
}



double Account::get_balance() const
{
	return this->balance;
}



std::ostream &operator<<(std::ostream &os, const Account &account) {
    os << "[Account: " << account.name << ": " << account.balance << "]";
	return os;
}
#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string name, double balance)
	:Account{name, balance} {
}

bool CheckingAccount::withdraw(double amount)
{
	amount += withrawal_fee;
	return Account::withdraw(amount);
}

std::ostream& operator<<(std::ostream& os, CheckingAccount& c_acc)
{
	os << "[Checking Account: " << c_acc.name << ": $" << c_acc.balance << "]";
	return os;
}

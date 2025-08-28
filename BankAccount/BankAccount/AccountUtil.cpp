#include "AccountUtil.h"


// Account Helper Functions

void display(const std::vector<Account>& account)
{
	std::cout << "===Accounts=============================================================================" << std::endl;
	for (const auto &acc : account)
		std::cout << acc << std::endl;
}


void deposit(std::vector<Account>& account, double amount)
{
	std::cout << "===Depositing to accounts=============================================================================" << std::endl;
	for (auto& acc : account) {
		if (acc.deposit(amount))
			std::cout << "Deposited " << amount << " to " << acc << std::endl;
		else
			std::cout << "Failed Deposited " << amount << " to " << acc << std::endl;
	}
}


void withdraw(std::vector<Account>& account, double amount)
{
	std::cout << "===Withdrawing from account=============================================================================" << std::endl;

	for (auto& acc : account) {
		if (acc.withdraw(amount)) 
			std::cout << "Withdrew " << amount << " from " << acc << std::endl;
		else 
			std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
	}
	
}
 // SavingsAccount Helper Functions

void display(const std::vector<SavingsAccount>& s_account)
{
	std::cout << "===Savings Accounts=============================================================================" << std::endl;
	for (const auto& s_acc : s_account)
		std::cout << s_acc << std::endl;
}


void deposit(std::vector<SavingsAccount>& s_account, double amount)
{
	std::cout << "===Depositing to savings accounts=============================================================================" << std::endl;
	for (auto& s_acc : s_account) {
		if (s_acc.deposit(amount))
			std::cout << "Deposited " << amount << " to " << s_acc << std::endl;
		else
			std::cout << "Failed Deposited " << amount << " to " << s_acc << std::endl;
	}
}


void withdraw(std::vector<SavingsAccount>& s_account, double amount)
{
	std::cout << "===Withdrawing from account=============================================================================" << std::endl;

	for (auto& s_acc : s_account) {
		if (s_acc.withdraw(amount))
			std::cout << "Withdrew " << amount << " from " << s_acc << std::endl;
		else
			std::cout << "Failed Withdrawal of " << amount << " from " << s_acc << std::endl;
	}

}


// CheckingAccount Helper Funcs

void display(std::vector<CheckingAccount>& checking_account) {
	for (const auto& check_acc : checking_account) {
		std::cout << check_acc << std::endl;
	}
}

void deposit(std::vector<CheckingAccount>& checking_account, double amount) {
	for (auto& check_acc : checking_account) {
		if (check_acc.deposit(amount)) 
			std::cout << "Deposit Successful of " << amount << " from " << check_acc << std::endl;
		else 
			std::cout << "Failed Deposit of " << amount << " from " << check_acc << std::endl;
	}
}

void withdraw(std::vector<CheckingAccount>& checking_account, double amount) {
	for (auto& check_acc : checking_account) {
		if (check_acc.withdraw(amount))
			std::cout << "Withdrew " << amount << " from " << check_acc << std::endl;
		else
			std::cout << "Withdraw unsuccessful of " << amount << " from " << check_acc;
	}
}
#include "TrustAccount.h"

TrustAccount::TrustAccount(std::string name, double balance, double int_rate)
:SavingsAccount::SavingsAccount(name , balance , int_rate){
}

bool TrustAccount::deposit(double amount)
{
    if (amount < 0) {
        std::cout << "Invalid amount" << std::endl;
        return false;
    }
    else if (amount >= 5000.00) {
        SavingsAccount::deposit(amount);
        this->balance += 50;
        std::cout << "Deposited Amount : " << amount + 50 << " (" << amount << "$ [Orignal Amount]" << " + 50$ [Bonus] " << " = $" << amount + 50 << ")" << std::endl;
        return true;
    }
    else {
        SavingsAccount::deposit(amount);
        std::cout << amount << " deposited" << std::endl;
        return true;
    }
}

bool TrustAccount::withdraw(double amount)
{
    if (number_of_withdrawals <= 4) {
        std::cout << "Number of withdrawals exceeded, Sorry" << std::endl;
        return false;
    }
    else {
        number_of_withdrawals++;
        SavingsAccount::withdraw(amount);
        std::cout << amount << " Deposited";
        return true;
    }
        
}

std::ostream& operator<<(std::ostream& os, const TrustAccount& trust_account)
{
    os << "[Trust_Account: " << trust_account.name << ": " << trust_account.balance << ", " << "Interest Rate : " << trust_account.int_rate << "%]";
    return os;
}

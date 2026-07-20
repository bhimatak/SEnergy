#include <iostream>

class BankAccount
{
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNo, double amount)
    {
        accountNumber = accNo;
        balance = amount;
    }

    friend class BankManager;
};

class BankManager
{
public:
    void displayAccountDetails(BankAccount account)
    {
        std::cout << "Account Number: "
                  << account.accountNumber << std::endl;

        std::cout << "Balance: "
                  << account.balance << std::endl;
    }

    void deposit(BankAccount& account, double amount)
    {
        account.balance += amount;
    }
};

int main()
{
    BankAccount account(1001, 5000);

    BankManager manager;

    manager.displayAccountDetails(account);

    manager.deposit(account, 2000);

    manager.displayAccountDetails(account);

    return 0;
}
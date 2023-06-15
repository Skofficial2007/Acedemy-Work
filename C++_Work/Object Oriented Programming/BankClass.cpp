/*
Create a class called "BankAccount" to represent a bank account.
Implement member functions to deposit and withdraw money, and calculate the interest based on the account balance.
*/

#include <iostream>

using namespace std;

class BankAccount
{
    double balance;
    double interestRate;
    public:
        BankAccount(double balance, double interestRate)
        {
            this->balance = balance;
            this->interestRate = interestRate;
        }

        void deposit(double amount)
        {
            balance += amount;
        }

        void withdraw(double amount)
        {
            balance -= amount;
        }

        double getBalance()
        {
            return balance;
        }

        double calculateInterest()
        {
            return balance * interestRate;
        }
};

int main()
{
    BankAccount account(1000, 0.05);

    account.deposit(500);
    account.withdraw(200);

    cout << "The balance is: " << account.getBalance() << endl;
    cout << "The interest is: " << account.calculateInterest() << endl;

    return 0;
}
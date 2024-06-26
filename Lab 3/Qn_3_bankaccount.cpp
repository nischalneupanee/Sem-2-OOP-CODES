/*Design a class called BankAccount that has
private data members account_number, account_holder_name, and balance. Include
member functions to:


Initialize the account with an account number, account holder's name, and
initial balance.


Deposit an amount into the account.


Withdraw an amount from the account.


Check the current balance.*/
#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    string account_number;
    string account_holder_name;
    double balance;

public:
    BankAccount(const string &acc_number, const string &holder_name, double initial_balance)
        : account_number(acc_number), account_holder_name(holder_name), balance(initial_balance) {}

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    double check_balance() const
    {
        return balance;
    }

    void display_account_info() const
    {
        cout << "Account Number: " << account_number << endl;
        cout << "Account Holder Name: " << account_holder_name << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account("123456789", "John Doe", 1000.0);

    account.display_account_info();
    account.deposit(500.0);
    cout << "Balance after deposit: " << account.check_balance() << endl;
    account.withdraw(200.0);
    cout << "Balance after withdrawal: " << account.check_balance() << endl;
    account.display_account_info();

    return 0;
}

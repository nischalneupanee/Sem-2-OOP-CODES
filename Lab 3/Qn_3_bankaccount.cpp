/*Design a class called BankAccount that has
private data members account_number, account_holder_name, and balance. Include
member functions to:


Initialize the account with an account number, account holder's name, and
initial balance.*/
#include <iostream>
using namespace std;

class BankAccount {
private:
    int account_number;
    string account_holder_name;
    double balance;

public:
    void initialize(int acc_number, const string& holder_name) {
        account_number = acc_number;
        account_holder_name = holder_name;
        balance = 0.0;
    }

    void display() const {
        cout << "Account Number: " << account_number << "\n";
        cout << "Account Holder Name: " << account_holder_name << "\n";
        cout << "Balance: " << balance << "\n";
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << "\n";
        } else {
            cout << "Invalid amount to deposit.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << "\n";
        } else {
            cout << "Invalid amount to withdraw or insufficient funds.\n";
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account;
    int acc_number;
    string holder_name;

    cout << "Enter account number: ";
    cin >> acc_number;
    cout << "Enter account holder name: ";
    cin.ignore();
    getline(cin, holder_name);

    account.initialize(acc_number, holder_name);

    int choice;
    double amount;

    do {
        cout << "\nBank Account Menu:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Display Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                cout << "Current Balance: " << account.getBalance() << "\n";
                break;
            case 4:
                account.display();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

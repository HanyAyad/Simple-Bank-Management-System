#include <iostream>
#include <map>
#include <string>
using namespace std;

class Bank {
private:
    map<string, double> accounts;

public:
    void create_account(const string &name, double balance) {
        if (accounts.count(name)) {
            cout << "Account with name '" << name << "' already exists." << endl;
        } else {
            accounts[name] = balance;
            cout << "Account created successfully." << endl;
        }
    }

    void deposit(const string &name, double amount) {
        if (!accounts.count(name)) {
            cout << "Account with name '" << name << "' does not exist." << endl;
        } else {
            accounts[name] += amount;
            cout << "Deposit successful. Current balance: " << accounts[name] << endl;
        }
    }

    void withdraw(const string &name, double amount) {
        if (!accounts.count(name)) {
            cout << "Account with name '" << name << "' does not exist." << endl;
        } else {
            if (accounts[name] >= amount) {
                accounts[name] -= amount;
                cout << "Withdrawal successful. Current balance: " << accounts[name] <<endl;
            } else {
                cout << "Insufficient balance." << endl;
            }
        }
    }

    void check_balance(const string &name) {
        if (!accounts.count(name)) {
            cout << "Account with name '" << name << "' does not exist." << endl;
        } else {
            cout << "Balance: " << accounts[name] << endl;
        }
    }
};

int main() {
    Bank bank;

    // Create a few accounts
    bank.create_account("John Doe", 1000);
    bank.create_account("Jane Doe", 2000);
    bank.create_account("John Doe", 5000); // this should print "Account with name 'John Doe' already exists."

    // Deposit some money
    bank.deposit("John Doe", 500);
    bank.deposit("Jane Doe", 1500);
    bank.deposit("Invalid Account", 500); // this should print "Account with name 'Invalid Account' does not exist."

    // Withdraw some money
    bank.withdraw("Jane Doe", 500);
    bank.withdraw("Jane Doe", 2500); // this should print "Insufficient balance."
    bank.withdraw("Invalid Account", 500); // this should print "Account with name 'Invalid Account' does not exist."

    // Check the balance of the accounts
    bank.check_balance("John Doe");
    bank.check_balance("Jane Doe");
    bank.check_balance("Invalid Account"); // this should print "Account with name 'Invalid Account' does not exist."

    return 0;
}

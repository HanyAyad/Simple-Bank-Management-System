# Simple-Bank-Management-System
A basic command-line based bank management system implemented in C++. 
The system keeps track of multiple bank accounts, and provides the ability to create new accounts, deposit money, withdraw money, and check the balance of an account. The system also includes error handling for invalid accounts, and ensures that the balance of an account cannot go below zero due to withdrawal. This project uses OOP and DS concepts by using classes, maps, and error handling in C++.

- The code defines a class Bank which represents a bank that keeps track of multiple bank accounts.
- The class has a private member variable accounts which is a map of account names to their balances. The keys of the map are of type std::string and represent the name of the account, and the values are of type double and represent the balance of the account.
- The class has four public member functions:
  - create_account(name, balance) creates a new account with the given name and balance if an account with the same name does not already exist.
  - deposit(name, amount) deposits the given amount into the account with the given name, if it exists.
  - withdraw(name, amount) withdraws the given amount from the account with the given name, if it exists and there is sufficient balance.
  - check_balance(name) prints the balance of the account with the given name, if it exists.
- The main function creates an instance of the Bank class and demonstrates the use of the various member functions

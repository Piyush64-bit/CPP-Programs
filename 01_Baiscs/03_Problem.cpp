// Encapsulation -> data hiding

#include <iostream>
using namespace std;

class BankAccount {
private:
    double Balance; // Private member variable for encapsulation

public:
    // Constructor to initialize the balance
    BankAccount(double initialbalance) {
        Balance = initialbalance;
    }

    // Function to deposit money
    void deposit(double amount) {
        Balance += amount;
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > Balance) {
            cout << "Insufficient Funds" << endl;
        } else {
            Balance -= amount;
        }
    }

    // Function to get the current balance
    double getBalance() {
        return Balance;
    }
};

int main() {
    BankAccount myAccount(10000); // Create a BankAccount object with an initial balance of 10000

    myAccount.deposit(5000); // Deposit 5000
    cout << "Balance: " << myAccount.getBalance() << endl; // Display the balance

    myAccount.withdraw(18000); // Attempt to withdraw 18000
    cout << "Now: " << myAccount.getBalance() << endl; // Display the balance after withdrawal

    return 0;
}
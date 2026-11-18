
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    void setAccountNumber(int accountNumber) {
        this->accountNumber = accountNumber;
    }

    void setAccountHolder(string accountHolder) {
        this->accountHolder = accountHolder;
    }

    void setBalance(double balance) {
        if (balance >= 0)
            this->balance = balance;
        else
            cout << "Invalid balance!" << endl;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    string getAccountHolder() {
        return accountHolder;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;
    account.setAccountNumber(12345);
    account.setAccountHolder("Rahim");
    account.setBalance(5000);

    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Account Holder: " << account.getAccountHolder() << endl;
    cout << "Balance: " << account.getBalance() << endl;
    return 0;
}

#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string holderName;
    double balance;

public:
    BankAccount(int a, string n, double b)
    {
        accountNumber = a;
        holderName = n;
        balance = b;
    }

    int getAccountNumber()
    {
        return accountNumber;
    }

    string getHolderName()
    {
        return holderName;
    }

    double getBalance()
    {
        return balance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
            balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
            balance -= amount;
    }
};

int main()
{
    BankAccount b(101, "Deku", 5000);

    cout << b.getAccountNumber() << endl;
    cout << b.getHolderName() << endl;
    cout << b.getBalance() << endl;

    b.deposit(1000);
    b.withdraw(2000);

    cout << b.getBalance() << endl;

    return 0;
}
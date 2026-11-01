#include <iostream>
using namespace std;

class ATM
{
private:
    int pin;
    float balance;

public:
    // Constructor
    ATM(int p, float b)
    {
        pin = p;
        balance = b;
    }

    // PIN verification
    bool login(int enteredPin)
    {
        return enteredPin == pin;
    }

    // Check balance
    void checkBalance()
    {
        cout << "\nCurrent Balance: Rs." << balance << endl;
        cout << "Thank you for using ATM!" << endl;
    }

    // Deposit money
    void deposit()
    {
        float amount;

        cout << "\nEnter deposit amount: Rs.";
        cin >> amount;

        if (amount > 0)
        {
            balance = balance + amount;

            cout << "Amount deposited successfully!" << endl;
            cout << "Current Balance: Rs." << balance << endl;
        }
        else
        {
            cout << "Invalid amount!" << endl;
        }

        cout << "Thank you for using ATM!" << endl;
    }

    // Withdraw money
    void withdraw()
    {
        float amount;

        cout << "\nEnter withdrawal amount: Rs.";
        cin >> amount;

        if (amount <= 0)
        {
            cout << "Invalid amount!" << endl;
        }
        else if (amount <= balance)
        {
            balance = balance - amount;

            cout << "Please collect your cash." << endl;
            cout << "Current Balance: Rs." << balance << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }

        cout << "Thank you for using ATM!" << endl;
    }
};

int main()
{
    int pin, enteredPin, choice;
    float balance;

    // Account setup
    cout << "===== ATM ACCOUNT SETUP =====" << endl;

    cout << "Set your PIN: ";
    cin >> pin;

    cout << "Enter initial balance: Rs.";
    cin >> balance;

    ATM account(pin, balance);

    // Login
    cout << "\n===== ATM SYSTEM =====" << endl;
    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (account.login(enteredPin))
    {
        cout << "PIN verified successfully!" << endl;
    }
    else
    {
        cout << "Invalid PIN!" << endl;
        return 0;
    }

    // ATM menu
    do
    {
        cout << "\n===== ATM MENU =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                account.checkBalance();
                break;

            case 2:
                account.deposit();
                break;

            case 3:
                account.withdraw();
                break;

            case 4:
                cout << "\nThank you for using ATM!" << endl;
                break;

            default:
                cout << "\nInvalid choice!" << endl;
                cout << "Thank you for using ATM!" << endl;
        }

    } while (choice != 4);

    return 0;
}
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
    bool login(int count){
        cout << "\n===== ATM SYSTEM =====" << endl;
        int enteredPin;
        cout << "Enter your PIN: ";
        cin >> enteredPin;
        count++;
        if (pin == enteredPin){
            cout << "PIN verified successfully!" << endl;
            return true;
        }
        else if (count < 3)
        {
            cout << "Invalid PIN! Try again!" << endl;
            return login(count);
        }
        else
        {
            cout << "Attempts expired!" << endl;
            return false;
        }
    }
    void ATM_menu()
    {   
        int choice;
        while (true)
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
                    checkBalance();
                    break;

                case 2:
                    deposit();
                    break;

                case 3:
                    withdraw();
                    break;

                case 4:
                    cout << "\nThank you for using ATM!" << endl;
                    return;

                default:
                    cout << "\nInvalid choice!" << endl;
            }
        }
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
    int pin;
    float balance;

    // Account setup
    cout << "===== ATM ACCOUNT SETUP =====" << endl;
    cout << "Set your PIN: ";
    cin >> pin;

    cout << "Enter initial balance: Rs.";
    cin >> balance;

    ATM account(pin, balance);

    // Login
    int count=0;
    account.login(count);
    if (account.login(0))
    {
        account.ATM_menu();
    }
    else
    {
        cout << "ATM locked!" << endl;
    } 
    return 0;
}
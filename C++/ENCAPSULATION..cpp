#include<iostream>
using namespace std;

class BankAccount{
private:
      int Balance;

public:
      void setbalance(int b){
        Balance=b;
    }       
     int getBalance(){
        return Balance;
     }
};

int main(){
    BankAccount b;
    b.setbalance(30000);
    cout<<"Balance is: "<<b.getBalance();
}
#include<iostream>
using namespace std;

class Product{
public:
      string name;
      double price;
      int quantity;

Product(string name){
        this->name=name;
        cout<<name<<endl;
      }
Product(string name,double price,int quantity){
    this->name=name;
    this->price=price;
    this->quantity=quantity;
    cout<<name<<" "<<price<<" "<<quantity<<" ";
}
};
int main()
{
    Product p1("laptop");
    Product p2("laptop",50000,5);
    return 0;
}

    
#include<iostream>
using namespace std;
class Laptop{
private:
    int price;
    string brand;
    string model;
public:
    Laptop(int price,string brand,string model){
        this->price=price;
        this->brand=brand;
        this->model=model;
    }
    void display(){
        cout<<"Laptop price:"<<price<<endl;
        cout<<"Laptop brand:"<<brand<<endl;
        cout<<"Laptop model:"<<model<<endl;
    }
};
int main(){
    Laptop s1(55000,"Lenova","Galaxy");
    s1.display();
    Laptop s2(65000,"HP","15 pro max");
    s2.display();
    return 0;
}
#include<iostream>
using namespace std;

class FoodDelivery{
    public:
         virtual void deliverycharge(){
            cout<<"delivery charge is"<<endl;
         }

class Swiggy : public Food Delivery{
    public:
        void deliverycharge(){
            cout<<"delivery charge is 299"<<endl;
         }
class Zomato : public FoodDelivery{
    public:
        void deliverycharge(){
            cout<<"delivery charge is 269"<<endl;
        }
class Localdelivery : FoodDelivery{
    public:
        void deliverycharge(){
             cout<<"delivery charge is 259"<<endl;
        }
};

int main(){
      FoodDelivery 

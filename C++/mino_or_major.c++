#include<iostream>
using namespace std;
void check(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age>0 && age>=18 && age<=110){
        cout<<"Major";
    }
    else if(age>0 && age<=18 && age<=110){
        cout<<"Minor";
    }
    else{
        cout<<"You enter invalid age. try again!!!";
        check();//
    }
}
int main(){
    check();
}
#include<iostream>
using namespace std;
class Employee{
    public:
        string company_name;
        int emp_id;
        void work(){
            cout<<"Employee is working"<<endl;
        }
};
class Developer:public Employee{
    public:
        string name;
        void display(){
            cout<<"Company name:"<<company_name<<endl;
            cout<<"Employee Id:"<<emp_id<<endl;
            cout<<"Employee name:"<<name<<endl;
            cout<<"-----------Developer is coding------------"<<endl;
        }
};
int main(){
    Developer d;
    d.company_name="DEKU pvt.ltd";
    d.emp_id=333;
    d.work();
    d.name="Izuku Midoriya";
    d.display();
    return 0;
}
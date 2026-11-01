/*Create a class named college with attributes college name and create a class department that inherits 
  from college and AI&DS, MECH inherits from department.print the details sucha as  HODname,studentcount,
  facultycount in a class AI&DS*/
#include<iostream>
using namespace std;
class college{
    string college_name;
public:
    college(string college_name){
        this->college_name=college_name;
    }
};
class department:public college{
    string department_name;
    int department_count;
public:
    department(string college_name,string department,int department_count){
        this->department_name=department;
        this->department_count=department_count;
    }
    void display(){
        cout<<"College name:"<<college_name<<endl;
        cout<<"Department name:"<<department_name<<endl;
        cout<<"Department count"<<department_count<<endl;
    }
};
int main(){
    Deparment d("paavai college of Engineering","AI&DS",45);
    d.display();
    return 0;

}

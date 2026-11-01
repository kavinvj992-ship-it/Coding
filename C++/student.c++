#include<iostream>
using namespace std;

class Student{
private:
       int mark1;
       int mark2;
       int mark3;
public:
      void setmarks(int m1, int m2, int m3){
        mark1=m1;
        mark2=m2;
        mark3=m3;
      }
      int gettotal(){
        int total=mark1+mark2+mark3;
        return total;
      }
      float getaverage(){
        int t=gettotal();
        float avg=t/3;
        return avg;
      }
      char getGrade(){
        float a=getaverage();
        if(a>=90){
            return 'A';
        }
        else if(a>=75){
            return 'B' ;
        }
        else if(a>=60){
            return 'C';
        }
        else if(a>=50){
            return 'D';
        }
        else{
            return 'F';
        }
      }
};
int main()
{
    Student s1;
    s1.setmarks(90,70,50);
    cout<<"Total: "<<s1.gettotal()<<endl;
    cout<<"Average: "<<s1.getaverage()<<endl;
    cout<<"Grade: "<<s1.getGrade()<<endl;
return 0;
}

    
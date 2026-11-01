#include<iostream>
using namespace std;
 int fib(int n){
    int fibonacci=1,a,b;
    a=0;
    b=1;
    for(int i=0;i<n;i++){
        cout<<a;
        a=b;
        b=fibonacci;
        fibonacci=a+b;
    }
    return 0;
 }



int main()
{
    
    int fibonacci,n,a,b;
    cin>>n;
    fib(n);
    return 0;
}
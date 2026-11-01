#include<iostream>
using namespace std;
int main(){
    int f_range,l_range,n;
    cout<<"Enter the first range:";
    cin>>f_range;
    cout<<"Enter the last range:";
    cin>>l_range;
    cout<<"Enter check number: ";
    cin>>n;
    if(f_range<=n && l_range>=n){
        cout<<n<<" is the between the number range";
    }
    else{
        cout<<n<<" is out the between the number range";
    }
    return 0;
}
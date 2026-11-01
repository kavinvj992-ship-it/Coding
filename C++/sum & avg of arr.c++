//print the sum and average of array
//print max and min element 

#include<iostream>
using namespace std;
int sum(int n,int arr[]){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int avg(int n,int arr[]){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int avg=sum/n;
    return avg;
}
int main(){
    int n;
    cout<<"Enter a number of element in an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter your array elements:" ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sum of array: "<<sum(n,arr);
    cout<<"average of array: "<<avg(n,arr);
    return 0;
}
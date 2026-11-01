#include<stdio.h>
int main(){
    int n,rev=0,temp=n;
    scanf("%d",&n);
    while(n>0){
        int dig=n%10;
        rev=(rev*10)+dig;
        n/=10;
    }
    if(temp==rev){
        printf("plindrome");
    }
    else{
        printf("not a polindrome");
    }
}
#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0){
        n/=10;
        count+=1;
    }
    printf("number(%d) of the digit is %d",n,count);
    return 0;
}
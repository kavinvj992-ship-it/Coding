#include<stdio.h>
int main(){
    int n,rev=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0){
        int dig=n%10;
        rev=(rev*10)+dig;
        n/=10;
    }
    printf("%d",rev);
    return 0;
}
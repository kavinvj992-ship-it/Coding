#include<stdio.h>
int main(){
    int org,n,reminder,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    org=n;
    while(n!=0){
        reminder=n%10;
        sum+=(reminder*reminder*reminder);
        n/=10;
    }
    if(sum==org){
        printf("%d is a amstrong number",org);
    }
    else{
        printf("%d is not a amstrong number",org);
    }
    return 0;
}
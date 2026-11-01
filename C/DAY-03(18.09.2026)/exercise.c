#include<stdio.h>
int main(){
    int n;
    int even_sum=0;
    int odd_sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(i%2==0){
            even_sum+=i;
        }
        else{
            odd_sum+=i;
        }
    }
    printf("Even sum of 1 to %d is: %d",n,even_sum);
    printf("\nOdd sum of 1 to %d is: %d",n,odd_sum);
    return 0;
}
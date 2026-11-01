#include<stdio.h>
int main(){
    int n,odd_count=0,even_count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    printf("count of the 1 to %d even number is %d",n,even_count);
    printf("\ncount of the 1 to %d odd number is %d",n,odd_count);
}
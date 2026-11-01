#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            count+=1;
        }
    }
    printf("count of the 1 to %d even number is %d",n,count);
}
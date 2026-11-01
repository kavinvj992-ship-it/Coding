/*
pattern:****,...*
        *        *
        *        *
        ,        ,
        .        .
        .        .
        ****,....*
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number to print a hollow pattern:");
    scanf("%d",&n);
    printf("your hollow square is:\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 ||i==n || j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
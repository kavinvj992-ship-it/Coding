#include<stdio.h>
int main(){
    int n,dig=0,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    int org=n;
    int sqr=n*n;
    while(sqr>0){
        dig=sqr%10;
        sum+=dig;
        sqr/=10;
    }
    if(org==sum){
        printf("%d is a neon number",org);
    }
    else{   
        printf("%d is not a neon number",org);
    }
    return 0;
}
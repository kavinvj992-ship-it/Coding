//0 1 1 2 3 5 8 0 
#include<stdio.h>
int main(){
    int n,fib_a=0,fib_b=1,fib_c;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("fibonacci series upto 1 to %d are: ",n);
    for(int i=0;i<n;i++){
        printf("%d ",fib_a);
        fib_c=fib_a+fib_b;
        fib_a=fib_b;
        fib_b=fib_c;
    }
    return 0;
}
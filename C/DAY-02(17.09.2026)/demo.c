//1.write a program that check even or odd
//2.writa a progra that simulates a simple banking system.Check if a user can withdraw money based on their 
//  account balance and print the balance amount after withdrawal.
//      input:Amout=500000,money=100000
//      outpur:400000     
//3.write a program that takes three integer inpits and prints the largest of the three using conditional 
//  operators
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:")
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is a even number");
    }
    else{
        printf("%d is odd number");
    }
    return 0
}

#include<stdio.h>
int main(){
    int amount,money;
    printf("Enter your amount:");
    scanf("%d",&amount);
    printf("\nEnter your money:");
    scanf("%d",&money);
    if(amount>money){
        amount-=money;
        printf("Your current amount is:",amount);
    }
    else{
        
    }
}

#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d ",&a &b &c );
    if(a>b && a>c){
        printf("a is a greatest number");
    }
    else if(b>c && b>a){
        printf("b is a greatest number");
    }
    else{
        printf("c is a greatest number");
    }
}
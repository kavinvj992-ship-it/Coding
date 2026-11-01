// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char op;
    int a=10,b=20;
    printf("Enter value for a:");
    scanf(" %d",&a);
    printf("Enter value for b:");
    scanf(" %d",&b);
    printf("Enter express such as '+','-','*','/','%%'(othewise that shows error):");
    scanf(" %c",&op);
    switch(op){
        case '+':
            printf("Addition:%d",a+b);
            break;
        case '-':
            printf("Subtraction:%d",a-b);
            break;
        case '*':
            printf("Multiplication:%d",a*b);
            break;
        case '/':
            printf("Division:%d",a/b);
            break;
        case '%':
            printf("Mod division:%d",a%b);
            break;
        default:
            printf("ERROR: invalid expression!!");
            break;
    }
    return 0;
}
#include<stdio.h>
int main(){
    char str[50];
    printf("Enter your name:");
    scanf("%49s",str);
    printf("your name is %s\n",str);
    return 0;
}
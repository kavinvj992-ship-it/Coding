#include<stdio.h>
int main(){
    char str[50];
    printf("Enter your name:");
    fgets(str,sizeof(str),stdin);
    printf("Your name is %s",str);
    return 0;
}
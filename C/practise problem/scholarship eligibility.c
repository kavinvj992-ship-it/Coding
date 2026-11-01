#include<stdio.h>
int main(){
    int mark,income;
    printf("Enter your mark and family income: ");
    scanf("%d %d",&mark,&income);
    if(mark>=85 && income<=300000){
        printf("You will get a full scholorship!");
    }
    else if(mark>=75 && income<=500000){
        printf("you will get a partial scholorship");
    }
    else{
        printf("No scholarship");
    }
    return 0;
}
#include<stdio.h>
int main(){
    float p,r,t;
    printf("Enter the values:");
    scanf("%f %f %f",&p,&r,&t);
    float SI=(p*r*t)/100;
    printf("Simple interest is %f",SI);
}
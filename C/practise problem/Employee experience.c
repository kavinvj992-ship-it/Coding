#include<stdio.h>
int main(){
    int experience,salary;
    float bonus;
    printf("Enter you experience and salary: ");
    scanf("%d %d",&experience,&salary);
    if(experience>=10){
        bonus=salary*0.20;
    }
    else if(experience>=5){
        bonus=salary*0.10;
    }
    else if(experience>=2){
        bonus=salary*0.5;
    }
    else{
        bonus=0;
    }
    printf("Your bonus amount is %f\n",bonus);
    printf("Your updated salary is %f",bonus+salary);
    return 0;
}
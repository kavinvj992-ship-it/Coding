#include<stdio.h>
int add(int a,int b){
    int sum=a+b;
    return sum;
}

int sub(int a , int b){
    int sub=a-b;
    return sub;
}

int multipliacation(int a, int b){
     int multiplication=a*b;
     return multiplication;
}

int division(int a,int b){
    int division= a/b;
    return division;
}
int main(){
    int a=1,b=2;
    printf("add=%d\n",add(a,b));
    printf("sub=%d\n",sub(a,b));
    printf("mult=%d\n",multipliacation(a,b));
    printf("div=%d",division(a,b));
    return 0;
}
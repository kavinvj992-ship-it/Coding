#include<stdio.h>
int main(){
    int productId;
    float price;
    int stock;
    printf("Enter product ID:");
    scanf("%d",&productId);
    printf("Enter product price:");
    scanf("%f",&price);
    printf("Enter stock quantity:");
    scanf("%d",&stock);

    printf("your entered product ID is %d",productId);
    printf("\nyour entered product price is %f",price);
    printf("\nyour entered product quantity is %d",stock);
    return 0;
}
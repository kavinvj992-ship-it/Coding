#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n],mat[n];
    printf("\nEnter the element of array:\n");
    for(int i=0;i<0;i++){
        scanf("%d",&arr[i]);
    }
    printf("you elements are:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        arr[i]=mat[i];
    }
    printf("\ncopied elements of array:\n");
    for(int i=0;i<n;i++){
        printf("%d",mat[i]);
    }
}
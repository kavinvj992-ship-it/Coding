#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int even[n],odd[n],ec=0,oc=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            even[i]=arr[i];
        }
        else{
            odd[i]=arr[i];
        }
    }
    printf("Even array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",even[i]);
    }
    printf("\nOdd array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",odd[i]);
    }
    return 0;
}
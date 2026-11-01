#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of element in a array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEmter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int first=arr[0];

    for(int i=0;i<n-1;i++){
        if(n-1==i){
            first=arr[n-1];
        }
        else{
            arr[i]=arr[i+1];
        }
    }
    printf("\nLeft rotated arrary:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
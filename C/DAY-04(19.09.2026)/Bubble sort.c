#include<stdio.h>
int main(){
    int size,i,j;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter you array elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Bubble sorted array:");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
#include<stdio.h>
int main(){
    int size,i,target,flag=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements:");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter your finding elament:");
    scanf("%d",&target);
    for(i=0;i<size;i++){
        if(target==arr[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Element %d is find at index %d",target,i);
    }
    else{
        printf("Element is not the array");
    }
    return 0;
}
/*
Binary search:

1.Array must be ascending order

mid=low+(high-low)/2
check t==arr[mid]
check t<arr[mid] or t>arr[mid]
updat high=mid-1*/
#include<stdio.h>
int main(){
    int size;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<=size;i++){
        scanf("%d",&arr[i]);
    }
    int target=56;
    int low=0,high=size-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){

        }
    }
}
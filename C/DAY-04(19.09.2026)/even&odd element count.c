#include<stdio.h>
int main(){
    int n,arr[n],even_count=0,odd_count=0;
    printf("enter a size of array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    printf("Even count of the array is %d\n",even_count);
    printf("Odd count of the array is %d",odd_count);
    return 0;
}
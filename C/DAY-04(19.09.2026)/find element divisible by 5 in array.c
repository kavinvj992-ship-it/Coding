#include<stdio.h>
int main(){
    int n,sum;
    int arr[n];
    printf("Enter size of the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("divisible by 5 is");
        if(arr[i]%5==0){
            sum+=arr[i];
            printf("%d",arr[i]);
        }
    }
    printf("sum of the divicible by 5 in array:%d",sum);
    return 0;
}
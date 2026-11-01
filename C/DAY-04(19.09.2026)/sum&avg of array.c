#include<stdio.h>
int main(){
    int n,arr[n],sum=0;
    printf("Enter size of the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("your %d element of the array is %d\n",i,arr[i]);
        sum+=arr[i];
    }
    printf("sum of the array is:%d\n",sum);
    int avg=sum/n;
    printf("Average of the array is %d",avg);
}
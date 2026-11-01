#include<stdio.h>
int main(){
    int r,c;
    printf("Enter a size of rows and colums:");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter your array elements:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int j=0;j<c;j++){
        int sum=0;
        for(int i=0;i<r;i++){
            sum+=arr[i][j];
        }
        printf("Sum of %d column is %d\n",j+1,sum);
    }
    return 0;
}
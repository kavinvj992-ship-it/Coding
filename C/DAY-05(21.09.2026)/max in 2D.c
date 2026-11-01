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
    int max=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    printf("Maximm element of your array:%d",max);
    return 0;
}
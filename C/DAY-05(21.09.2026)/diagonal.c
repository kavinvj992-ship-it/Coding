#include<stdio.h>
int main(){
    int r,c;
    printf("Enter no.of rows and colms:");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter the element of array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][i]);
        }
    }
    printf("primary diagonal of the array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                printf("%d",arr[i][j]);
            }
            
        }
    }

}
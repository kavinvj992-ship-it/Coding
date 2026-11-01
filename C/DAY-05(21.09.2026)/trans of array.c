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
    printf("you array transpose is:\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
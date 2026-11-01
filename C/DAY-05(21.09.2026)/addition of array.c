#include<stdio.h>
int main(){
    int r,c;
    printf("Enter no.of rows and colms:");
    scanf("%d %d",&r,&c);
    int A[r][c],B[r][c],C[r][c];
    printf("Enter first array element:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&A[i][i]);
        }
    }
    printf("Enter second array element:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&B[i][i]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("Addition of the array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",C[i][i]);
        }
        printf("\n");
    }
}
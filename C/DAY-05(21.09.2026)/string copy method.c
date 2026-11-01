#include<stdio.h>
#include<string.h>
int main(){
    char str1,str2;
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    strcpy(str1,str2);
    printf("%d",str1);
    printf("%d",str2);
    return 0;
}
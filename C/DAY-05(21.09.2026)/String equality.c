#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    char str1[50];
    fgets(str1,sizeof(str1),stdin);
    if(strcmp(str,str1)==0){
        printf("These are same string");
    }
    else{
        printf("These are not same string");
    }
    return 0;
}
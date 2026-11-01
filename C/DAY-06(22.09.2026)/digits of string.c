#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int count=0;
    int i=0;
    printf("Enter a string:");
    scanf("%s",str);
    while(str[i]!='\0'){
        if(str[i]>='0' && str[i]<='a'){
            count++;
        }
        i++;
    }
    printf("Total number of digits:%d\n",count);
    return 0;
}
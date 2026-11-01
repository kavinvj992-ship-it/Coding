#include<stdio.h>
#include<string.h>
int main(){
    char str[50]="madam";
    int left=0;
    int right=strlen(str)-1;
    int pal=1;
    while(left<=right){
        if(str[left]!=str[right]){
            pal=0;
            break;
        }
        left++;
        right--;
    }

}
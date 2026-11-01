#include<stdio.h>
#include<string.h>
int main(){
    char a[]="abcdefghijklmnopqrstuvwxyz.,; ;,.zyxwvtsrqponmlkjihgfedcba";
    int vowel,cons;
    for(int i=0;a[i]!='/o';i++){
        if((a[i]=='a' || a[i]=='i' || a[i]=='o' || a[i]=='c' || a[i]=='u' || a[i]=='A' || a[i]=='I' || a[i]=='O' ||a[i]=='E' || a[i]=='U')){
            vowel++;            
        }
        else if(a[i]!=' '){
            cons++;
        }
    }
}
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    // write your solution below
    if(1<=n){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}



// --------------------------------------------------------------
int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", isPrime(n) ? "True" : "False");
    return 0;
}
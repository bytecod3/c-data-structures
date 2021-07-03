#include <stdio.h>

int factorial(int );

int factorial(int n){
    if(n < 0) return 1;
    if(n == 0) return 1;

    return n * factorial(n - 1);
}

int main(){
    int res;
    res = factorial(-3);
    printf("%d", res);
}
#include<stdio.h>

int fibonacci(int n);

// define fibonacci
int fibonacci(int n){
    // compute fibonacci numbers
    if(n < 0) {
        return n; // TODO:use error handling here
    }else{
        return (fibonacci(n-1)) + (fibonacci(n-2));
    }  

}

int main(){
    int res;
    
    res = fibonacci(5);

    printf("%d \n", res);

}
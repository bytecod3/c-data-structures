#include <stdio.h>

int fact(int n){
    int f = 1;
    while(n > 0){
        f = f * n;
        --n;
    };

    return f;
}

int r;
int main(){
    r = fact(7);
    printf("%d", r);
    printf("\n");
}

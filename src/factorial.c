#include <stdio.h>

int factorial(int num){
    // fact = n * (n-1) * (n-2) * ... * (n - n)
    int res = 1;

    for (int i = 1; i <= num; i++){
        res *= i;
    }

    return res;
}

int main(){
    int res = factorial(5);

    printf("%d", res);

    return 0;
}
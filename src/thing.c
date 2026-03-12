#include <stdio.h>

int main(){

    int a, b;
    float c, d;

    a = 3;
    b = a * 3;
    c = b / 2;
    d = a + c;
    d = c - (d / 2) + c * d;
    c = a % 2;
    c = c + d;
    printf("c = %.2f\n", c);

    return 0;
}
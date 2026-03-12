#include <stdio.h>
#include <stdlib.h>

int main(void){
    system("cls");

    int a=7, b=4, c, resto;
    float d;

    c = a / b;
    d = (float) a / b; //cast

    printf("c = %i\n", c);
    printf("d = %.2f", d);

    // O operador do resto da divisão
    resto = a % b;
    printf("\nResto = %i\n", resto);

    return 0;
}
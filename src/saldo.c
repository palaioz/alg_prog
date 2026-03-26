#include <stdio.h>

int main(void){

    float saldo;
    printf("Qual seu saldo?\n");
    scanf("%f", &saldo);

    if (saldo > 0){
        printf("saldo positivo");
    } else {
        printf("saldo insuficiente seu pobre desgraçado");
    }
    return 0;
}
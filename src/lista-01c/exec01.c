/*
Ler a idade de uma pessoa expressa em anos, meses e dias. O algoritmo deve mostrar a idade da pessoa em dias (considere que todos os anos tem 365 dias e todos os meses tem 30 dias).
*/

#include <stdio.h>

int main(void){

    int anos, meses, dias;

    printf("QUANTOS DIAS VOCE SOBREVIVEU?\n");
    printf("Qual a sua idade? (anos meses dias) \n");
    scanf("%d %d %d", &anos, &meses, &dias);

    dias += (anos * 365) + (meses * 30);

    printf("Voce esta vivo ha %d dias.", dias);

    return 0;
}
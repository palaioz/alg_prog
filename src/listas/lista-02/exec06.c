/*
6. Existem números de 4 dígitos (entre 1000 e 9999) que obedecem à seguinte característica: 
    Se dividirmos o número em dois números de dois dígitos, um composto pela dezena e pela
    unidade, e outro pelo milhar e pela centena, se somarmos estes dois novos números gerando
    um terceiro, o quadrado deste terceiro número é exatamente o número original de quatro
    dígitos. Por exemplo:
       
        2025 -> dividindo: 20 e 25 -> somando 20 e 25 tem-se 45 ** 2 = 2025.

Escreva um programa para ler um número e verificar se ele obedece a esta característica.
*/



#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n;
    char str[4]; 
    char first2[2];
    char second2[2];

    printf("Digite um numero inteiro entre 1000 e 9999\n");
    scanf("%d", &n);

    itoa(n, str, 10);

    first2[0] = str[0];
    first2[1] = str[1];

    printf("%s", first2);

    return 0;
}
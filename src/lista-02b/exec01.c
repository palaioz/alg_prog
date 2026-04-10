/*
    1. Escrever um algoritmo que efetue as operações de uma calculadora com 4 operações. 
    O algoritmo lê o primeiro operando, a operação ( ‘+’, ‘-’, ‘*’ e ‘/’) e o operando. 
    O algoritmo deve escrever na tela:
        1º operando operação 
        2º operando = resultado

    Por exemplo, se forem lidos os valores 2 * 5, o algoritmo deverá escrever:
        2*5 = 10
*/

#include <stdio.h>

int main(){
    while (1){
        int operacao;
        float a, b;

        printf("\n\nEscolha uma operacao:");
        printf("\n1. +");
        printf("\n2. -");
        printf("\n3. *");
        printf("\n4. /\n\n");
        scanf("%d", &operacao);
        
        switch (operacao)
        {
        case 1:
            printf("\nDigite A e B: ");
            scanf("%f %f", &a, &b);

            float soma = a + b;

            printf("\nResultado: %f", soma);
            break;
        
        case 2:
            printf("\nDigite A e B: ");
            scanf("%f %f", &a, &b);

            float subtr = a - b;

            printf("\nResultado: %f", subtr);
            break;

        case 3:
            printf("\nDigite A e B: ");
            scanf("%f %f", &a, &b);

            float mult = a * b;

            printf("\nResultado: %f", mult);
            break;

        case 4:
            printf("\nDigite A e B: ");
            scanf("%f %f", &a, &b);

            float div = a / b;

            printf("Resultado: %f", div);
            break;

        default:
            break;
        }
    }
    return 0;
}
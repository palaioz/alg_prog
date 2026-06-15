/*
Escreva um algoritmo que leia um código numérico inteiro e um vetor de 50 posições de
números. Se o código for zero, termine o algoritmo. Se o código for 1, mostre o vetor na
ordem em que foi lido. Se o código for 2, mostre o vetor na ordem inversa, do último
elemento até o primeiro.
*/

#include <stdio.h>

int main() {
    int codigo;
    float vetor[50]; 

    printf("Digite o codigo (0: Sair, 1: Ordem Direta, 2: Ordem Inversa): ");
    scanf("%d", &codigo);

    if (codigo == 0) {
        printf("Algoritmo terminado.\n");
        return 0;
    }

    if (codigo != 1 && codigo != 2) {
        printf("Codigo invalido! Encerrando o programa.\n");
        return 0;
    }

    printf("\nDigite os 50 numeros para preencher o vetor:\n");
    for (int i = 0; i < 50; i++) {
        printf("Posicao [%d]: ", i);
        scanf("%f", &vetor[i]);
    }


    if (codigo == 1) {
        printf("\nVetor na ordem em que foi lido:\n");
        for (int i = 0; i < 50; i++) {
            printf("%.2f ", vetor[i]);
        }
        printf("\n");
    } 
    else if (codigo == 2) {
        printf("\nVetor na ordem inversa:\n");
        
        for (int i = 49; i >= 0; i--) {
            printf("%.2f ", vetor[i]);
        }
        printf("\n");
    }

    return 0;
}
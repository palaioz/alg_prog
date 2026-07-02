/*
Desenvolva um programa na linguagem C, que tenha duas matrizes A e B, com tamanho N x N (N ≤ 10). 
Inicialize (gere) os elementos de cada uma das matrizes. Posteriormente, disponibilize ao usuário 
um Menu de Opções para fazer as seguintes operações com matrizes: 
    (1) Somar as matrizes A e B (C = A + B) 
    (2) Encontrar o menor elemento da matriz A e mostrar sua posição (linha e coluna) 
    (3) Mostrar os elementos de uma linha da matriz A (o número da linha é informado pelo usuário) 
    (4) Copiar os elementos de uma coluna da matriz A para um vetor (o número da coluna é 
    informado pelo usuário) e mostrar o vetor na tela. 
    (5) Multiplicar a matriz B por um número k informado pelo usuário (D = k * B) 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <windows.h>

#define MAX_N 10

int main(){
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n = 0, i, j;
    int A[MAX_N][MAX_N], B[MAX_N][MAX_N], C[MAX_N][MAX_N], D[MAX_N][MAX_N];
    int opcao = -1;

    // --- VALIDANDO O TAMANHO N ---
    while (n <= 0 || n > MAX_N) 
    {
        printf("Digite a dimensão N das matrizes (máximo 10): ");
        scanf("%d", &n);
    }

    // --- INICIALIZANDO MATRIZES ---
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            A[i][j] = rand() % 50;
            B[i][j] = rand() % 50;
        }
    }

    // --- MOSTRAR AS MATRIZES GERADAS ---
    printf("\n=== MATRIZES GERADAS ALEATÓRIAMENTE ===");

    printf("\nMatriz A:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%4d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%4d ", B[i][j]);
        }
        printf("\n");
    }
    printf("=======================================\n");

    // --- MENU DE OPÇÕES ---
    while (opcao != 0)
    {
        printf("\n--- MENU DE OPÇÕES ---\n");
        printf("1. Somar matrizes (C = A + B)\n");
        printf("2. Menor elemento de A e sua posição\n");
        printf("3. Mostrar linha da matriz A\n");
        printf("4. Copiar coluna de A para vetor e mostrar\n");
        printf("5. Multiplicar matriz B por k (D = k * B)\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("\nMatriz C (A + B): \n");
                for(i = 0; i < n; i++)
                {
                    for(j = 0; j < n; j++)
                    {
                        C[i][j] = A[i][j] + B[i][j];
                        printf("%4d ", C[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                int menor = A[0][0];
                int min_i = 0, min_j =0;
                for(i = 0; i < n; i++)
                {
                    for(j = 0; j < n; j++)
                    {
                        if (A[i][j] < menor){
                            menor = A[i][j];
                            min_i = i;
                            min_j = j;
                        }
                    }
                }
                printf("\nMenor elemento de A: %d (Linha %d, Coluna %d)\n", menor, min_i, min_j);
                break;

            case 3:
                int linha;
                printf("Informe a linha desejada (0 a %d): ", n - 1);
                scanf("%d", &linha);
                if (linha >= 0 && linha < n)
                {
                    printf("Linha % de A: ", linha);
                    for(j = 0; j < n; j++)
                    {
                        printf("%d ", A[linha][j]);
                    }
                    printf("\n");
                } else {
                    printf("Linha inválida!\n");
                }
                break;

            case 4:
                int coluna, vetor[MAX_N];
                printf("Informe a coluna desejada (0 a %d): ", n - 1);
                scanf("%d", &coluna);
                if (coluna >= 0 && coluna < n) 
                {
                    printf("Vetor da coluna %d de A: ", coluna);
                    for (i = 0; i < n; i++) 
                    {
                        vetor[i] = A[i][coluna];
                        printf("%d ", vetor[i]);
                    }
                    printf("\n");
                } else {
                    printf("Coluna invalida!\n");
                }
                break;

            case 5:
                int k;
                printf("Informe o valor de k: ");
                scanf("%d", &k);
                printf("\nMatriz D (k * B):\n");
                for(i = 0; i < n; i++)
                {
                    for(j = 0; j < n; j++)
                    {
                        D[i][j] = k * B[i][j];
                        printf("%4d ", D[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 0:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }
    }

    return 0;
}
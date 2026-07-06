#include <stdio.h>
#include <math.h>

/**
 * @brief Exibe a matriz aumentada no terminal com formatacao alinhada.
 * @param matriz Matriz bidimensional do sistema [3][4].
 */

void imprimirMatriz(float matriz[3][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%8.2f ", matriz[i][j]);
        }
        printf(" | %8.2f\n", matriz[i][3]);
    }
    printf("--------------------------------------\n");
}

int main() {
    // Declaracao estruturada da matriz aumentada do sistema de recursos
    float matriz[3][4] = {
        {2.0, 1.0, 3.0, 40.0},
        {4.0, 2.0, 2.0, 52.0},
        {1.0, 3.0, 2.0, 39.0}
    };

    printf("Estado Inicial da Matriz Aumentada:\n");
    imprimirMatriz(matriz);

    // Passo 1: Eliminacao Gaussiana na primeira coluna
    printf("Operacao Elementar: L2 <- L2 - (4/2) * L1\n");
    float fator21 = matriz[1][0] / matriz[0][0];
    for (int j = 0; j < 4; j++) {
        matriz[1][j] -= fator21 * matriz[0][j];
    }
    imprimirMatriz(matriz);

    printf("Operacao Elementar: L3 <- L3 - (1/2) * L1\n");
    float fator31 = matriz[2][0] / matriz[0][0];
    for (int j = 0; j < 4; j++) {
        matriz[2][j] -= fator31 * matriz[0][j];
    }
    imprimirMatriz(matriz);

    // Passo 2: Verificacao de descontinuidade (Pivoteamento Parcial)
    // Se o elemento da diagonal for nulo, realiza a troca de linhas
    if (fabs(matriz[1][1]) < 1e-5) {
        printf("Detectado pivo nulo em matriz[1][1]! Permutando L2 com L3.\n");
        for (int j = 0; j < 4; j++) {
            float temp = matriz[1][j];
            matriz[1][j] = matriz[2][j];
            matriz[2][j] = temp;
        }
        imprimirMatriz(matriz);
    }

    // Declaracao das variaveis de saida do vetor solucao
    float x, y, z;

    // Passo 3: Algoritmo de Substituicao Reversa
    z = matriz[2][3] / matriz[2][2];
    y = (matriz[1][3] - matriz[1][2] * z) / matriz[1][1];
    x = (matriz[0][3] - matriz[0][1] * y - matriz[0][2] * z) / matriz[0][0];

    // Exibicao dos vetores de estado finais
    printf("Vetor Solucao Calculado:\n");
    printf("Quantidade da Tarefa A (x) = %.2f\n", x);
    printf("Quantidade da Tarefa B (y) = %.2f\n", y);
    printf("Quantidade da Tarefa C (z) = %.2f\n", z);

    return 0;
}
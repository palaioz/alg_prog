#include <stdio.h>

// Função para imprimir a matriz aumentada atual
void imprimirMatriz(float mat[3][4]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("[ ");
        for (int j = 0; j < 3; j++) {
            printf("%6.2f ", mat[i][j]);
        }
        printf("| %6.2f ]\n", mat[i][3]);
    }
    printf("\n");
}

int main() {
    // Definindo a matriz aumentada original do problema
    // Linha 0: CPU  -> 2x + 1y + 3z = 40
    // Linha 1: RAM  -> 4x + 2y + 2z = 52
    // Linha 2: Disco-> 1x + 3y + 2z = 39
    float mat[3][4] = {
        {2.0, 1.0, 3.0, 40.0},
        {4.0, 2.0, 2.0, 52.0},
        {1.0, 3.0, 2.0, 39.0}
    };

    printf("==================================================\n");
    printf(" Matriz Aumentada Inicial:\n");
    printf("==================================================\n");
    imprimirMatriz(mat);

    // Passo 1: Permutar Linha 0 com Linha 2 (para obter o pivô = 1 na primeira posição)
    printf("-> Operacao: Permutar Linha 1 com Linha 3 (L1 <-> L3) para facilitar o pivo:\n");
    for (int j = 0; j < 4; j++) {
        float temp = mat[0][j];
        mat[0][j] = mat[2][j];
        mat[2][j] = temp;
    }
    imprimirMatriz(mat);

    // Passo 2: Zerar o elemento da Linha 1, Coluna 0 (mat[1][0]) usando o pivô mat[0][0]
    // L2 = L2 - 4 * L1
    float fator1 = mat[1][0] / mat[0][0];
    printf("-> Operacao: Linha 2 <- Linha 2 - (%.1f * Linha 1) para zerar a coluna do pivo:\n", fator1);
    for (int j = 0; j < 4; j++) {
        mat[1][j] = mat[1][j] - fator1 * mat[0][j];
    }
    imprimirMatriz(mat);

    // Passo 3: Zerar o elemento da Linha 2, Coluna 0 (mat[2][0]) usando o pivô mat[0][0]
    // L3 = L3 - 2 * L1
    float fator2 = mat[2][0] / mat[0][0];
    printf("-> Operacao: Linha 3 <- Linha 3 - (%.1f * Linha 1) para zerar a coluna do pivo:\n", fator2);
    for (int j = 0; j < 4; j++) {
        mat[2][j] = mat[2][j] - fator2 * mat[0][j];
    }
    imprimirMatriz(mat);

    // Passo 4: Simplificar a Linha 1 multiplicando por -0.5 para melhorar os coeficientes
    printf("-> Operacao: Linha 2 <- Linha 2 * (-0.5) para simplificar:\n");
    for (int j = 0; j < 4; j++) {
        mat[1][j] = mat[1][j] * (-0.5);
    }
    imprimirMatriz(mat);

    // Passo 5: Zerar o elemento da Linha 2, Coluna 1 (mat[2][1]) usando o novo pivô mat[1][1]
    // L3 = L3 - (-5/5) * L2 => L3 = L3 + L2
    float fator3 = mat[2][1] / mat[1][1];
    printf("-> Operacao: Linha 3 <- Linha 3 - (%.1f * Linha 2) para zerar abaixo do segundo pivo:\n", fator3);
    for (int j = 0; j < 4; j++) {
        mat[2][j] = mat[2][j] - fator3 * mat[1][j];
    }
    printf("\n==================================================\n");
    printf(" Matriz Escalonada Final:\n");
    printf("==================================================\n");
    imprimirMatriz(mat);

    // Substituição Regressiva para encontrar as variáveis
    float z, y, x;

    // mat[2][2] * z = mat[2][3]
    z = mat[2][3] / mat[2][2];

    // mat[1][1] * y + mat[1][2] * z = mat[1][3]
    y = (mat[1][3] - mat[1][2] * z) / mat[1][1];

    // mat[0][0] * x + mat[0][1] * y + mat[0][2] * z = mat[0][3]
    x = (mat[0][3] - mat[0][1] * y - mat[0][2] * z) / mat[0][0];

    printf("==================================================\n");
    printf(" Resultados Obtidos:\n");
    printf("==================================================\n");
    printf("Quantidade de Tarefa A (x): %.2f\n", x);
    printf("Quantidade de Tarefa B (y): %.2f\n", y);
    printf("Quantidade de Tarefa C (z): %.2f\n", z);
    printf("==================================================\n");

    return 0;
}
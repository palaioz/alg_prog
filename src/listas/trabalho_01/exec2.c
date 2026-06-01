/*
2. Encontre as raízes de uma equação de 2º grau ax2 + bx + c. O algoritmo deverá ler os
coeficientes a, b e c e calcular as raízes utilizando a fórmula de Báskara:
(−b ± √(b2−4ac))/2a
O algoritmo deve ficar lendo os valores dos coeficientes a, b e c até que os valores
fornecidos para os três coeficientes sejam 0 (zero). Para cada conjunto de valores de
coeficientes lidos, o algoritmo deverá calcular e escrever os valores das duas raízes x1 e
x2. Se as raízes forem imaginárias (∆ negativo, sendo ∆ = b2 - 4ac ) o algoritmo deverá
escrever que não foi possível calcular as raízes. Se a = 0, ele deve escrever que a equação
é de primeiro grau.
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

int main(){
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float coef[3]; // coef[0]=a, coef[1]=b, coef[2]=c
    float delta, x1, x2;

    while(1) {
        // ---------- INPUT
        printf("\nDigite os coeficientes a, b e c (separados por espaço ou 0 0 0 para sair): ");
        scanf("%f %f %f", &coef[0], &coef[1], &coef[2]);

        if (coef[0] == 0 && coef[1] == 0 && coef[2] == 0) {
            printf("Execução interrompida pelo usuário.\n");
            break;
        }

        // ---------- PROCESSAMENTO & OUTPUT
        if (coef[0] == 0) {
            printf("Aviso: 'a' é igual a 0. A equação é de primeiro grau.\n");
        } else {
            delta = (coef[1] * coef[1]) - (4 * coef[0] * coef[2]);

            if (delta < 0) {
                printf("Erro: O delta é negativo (%.2f). Raízes imaginárias.\n", delta);
            } else {
                x1 = (-coef[1] + sqrt(delta)) / (2 * coef[0]);
                x2 = (-coef[1] - sqrt(delta)) / (2 * coef[0]);

                printf("Resultado \t|\t x1 = %.2f \t|\t x2 = %.2f\n", x1, x2);
            }
        }
    }

    return 0;
}

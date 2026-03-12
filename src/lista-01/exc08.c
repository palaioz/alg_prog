// ------------- EXERCÍCIO 8 --------------------
//  Escrever um algoritmo para ler as dimensões de uma cozinha (comprimento, largura e altura), calcular e
// escrever a quantidade de caixas de azulejos para azulejar todas as paredes (considere que não será
// descontada a área ocupada por portas e janelas). Cada caixa de azulejos possui 1,5 metros quadrados.

#include <stdio.h>

int main(){

    float comp, larg, alt, areaParedes, qtdCaixas;
    
    printf("Comprimento, largura e altura da cozinha: ");
    scanf("%f %f %f", &comp, &larg, &alt);

    areaParedes = (2 * comp * alt) + (2 * larg * alt);
    qtdCaixas = areaParedes / 1.5;

    printf("\nQuantidade de caixas de azulejo: %.2f\n", qtdCaixas );

    return 0;
}
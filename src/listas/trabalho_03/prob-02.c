/*
Ler um vetor de 12 números chamado amostragem. Cada número desse vetor corresponde à 
quantidade de amostras positivas de casos confirmados de Dengue, no estado do Rio Grande do Sul, 
durante 12 meses. O algoritmo deverá colocar em um segundo vetor, chamado percentual, a porcentagem 
que a quantidade de cada amostra contida em amostragem, corresponde em relação ao total. 

O algoritmo deve: 
    1. mostrar o valor contido em cada amostrangem e o percentual correspondente; 
    2. calcular a média de valores das amostras; 
    3. encontrar a maior quantidade de amostra e seu respectivo percentual; 
    4. mostrar quais são as amostras que possuem quantidade acima da média. 
*/

#include <stdio.h>

int main(){
    int amostragem[12];
    float percentual[12];
    int i, total = 0, max_amostra = 0, max_indice = 0;
    int min_amostra = 0, min_indice = 0;
    float media;

    // Leitura dos dados e cálculo total
    printf("Informe os casos de Dengue confirmados para os 12 meses:\n");
    for(i = 0; i < 12; i++)
    {
        printf("Mes %d: ", i + 1);
        scanf("%d", &amostragem[i]);
        total += amostragem[i];
    }

    // Cálculo da média e dos percentuais
    // Evita divisão por zero caso todas as amostras sejam zero
    if (total > 0)
    {
        for(i = 0; i < 12; i++)
        {
            percentual[i] = ((float)amostragem[i] / total) * 100.0;
        }
    } else {
        for(i = 0; i < 12; i++)
        {
            percentual[i] = 0.0;
        }
    }

    media = (float)total / 12.0;

    // 1. Mostrar valores e percentuais
    printf("\n--- RELATORIO DE AMOSTRAS ---\n");
    for(i = 0; i < 12; i++)
    {
        printf("Mes %02d: %d casos (%.2f%% do total)\n", i + 1, amostragem[i], percentual[i]);

        // Encontrar o maior valor
        if (amostragem[i] > max_amostra)
        {
            max_amostra = amostragem[i];
            max_indice = i;
        }
    }

    // Encontrar o menor valor
    min_amostra = max_amostra;
    for(i = 0; i < 12; i++)
    {
        if (amostragem[i] < min_amostra)
        {
            min_amostra = amostragem[i];
            min_indice = i;
        }
    }

    // 2. Média
    printf("\nMedia de casos mensais: %.2f\n", media);

    // 3. Maior amostra
    printf("Maior quantidade: %d casos no Mes %d (%.2f%%)\n", max_amostra, max_indice + 1, percentual[max_indice]);

    // Bônus: Menor amostra
    printf("Menor quantidade: %d casos no Mes %d (%.2f%%)\n", min_amostra, min_indice + 1, percentual[min_indice]);

    // 4. Amostras acima da média
    printf("Meses com quantidade ACIMA da media:\n");
    for(i = 0; i < 12; i++)
    {
        if(amostragem[i] >= media)
        {
            printf("- Mes %02d (%d casos)\n", i + 1, amostragem[i]);
        }
    }

    // Bônus: Amostras abaixo da média
    printf("Meses com quantidade ABAIXO da media:\n");
    for(i = 0; i < 12; i++)
    {
        if(amostragem[i] <= media)
        {
            printf("- Mes %02d (%d casos)\n", i + 1, amostragem[i]);
        }
    }

    return 0;
}
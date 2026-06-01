/*
4. Uma determinada região está sendo desmatada a uma taxa percentual constante, ano após
ano. Escreva um algoritmo que leia a área da região, a taxa de desmatamento anual e
escreva o ano em que a mata estará reduzida a menos de 20% de sua atual área.i
Por exemplo, se a área de floresta é 10.000.000 km2 e a taxa de desmatamento é de 1,5%
ao ano, o algoritmo deve escrever como saída:
“Em 2131, a área estará reduzida a menos ou igual a 20% de sua área
atual, o que corresponde a 1984616 km2.”

*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float area_inicial, area_atual, taxa;
    float limite_20_porcento;
    int ano_atual = 2026;

    // ---------- INPUT
    printf("Digite a área total da floresta (km²): ");
    scanf("%f", &area_inicial);
    printf("Digite a taxa de desmatamento anual (em %%): ");
    scanf("%f", &taxa);

    // ---------- PROCESSAMENTO
    area_atual = area_inicial;
    limite_20_porcento = area_inicial * 0.20;

    while (area_atual >= limite_20_porcento) {
        area_atual = area_atual - (area_atual * (taxa / 100.0));
        ano_atual++;
    }

    // ---------- OUTPUT
    printf("\nEm %d, a área estará reduzida a menos ou igual a 20%% de sua área atual,\n", ano_atual);
    printf("o que corresponde a %.0f km².\n", area_atual);

    return 0;
}

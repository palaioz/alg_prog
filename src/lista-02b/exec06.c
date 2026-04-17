/*
    6. Escreva um algoritmo que leia duas datas, na forma dia, 
    mês e ano e informe qual é a mais recente. 
*/

#include <stdio.h>

int main(){
    
    int d1, m1, a1;
    int d2, m2, a2;
    int dataValida = 1; // Flag para controle

    printf("\n--- Comparar proximidade de datas ---\n");
    
    printf("\nDigite a primera data (dd mm aaaa): ");
    scanf("%d %d %d", &d1, &m1, &a1);
    printf("\nDigite a segunda data (dd mm aaaa): ");
    scanf("%d %d %d", &d2, &m2, &a2);

    // --- TRATAMENTO DE DADOS
    // Condições onde o mês está incorreto (if não precisa dos '{}' nesse caso rápido)
    if (m1 < 1 || m1 > 12 || m2 < 1 || m2 > 12) dataValida = 0;

    // Dias negativos
    if (d1 < 1 || d2 < 1) dataValida = 0;

    // Meses com 31 dias (se o mês for de 31 dias e o dia inserido for maior que 31)
    if ((m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 | m1 == 12) && d1 > 31) dataValida = 0;
    if ((m2 == 1 || m2 == 3 || m2 == 5 || m2 == 7 || m2 == 8 || m2 == 10 | m2 == 12) && d2 > 31) dataValida = 0;

    // Meses com 30 dias
    if ((m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) && d1 > 30) dataValida = 0;
    if ((m2 == 4 || m2 == 6 || m2 == 9 || m2 == 11) && d2 > 30) dataValida = 0;

    // Fevereiro (sempre 28)
    if (m1 == 2 && d1 > 28) dataValida = 0;
    if (m2 == 2 && d1 > 28) dataValida = 0;

    // if (dataValida == 0) 
    if (!dataValida) {
        printf("\nErro: Voce digitou uma data que nao existe!\n");
        return 0; 
    }
    
    // --- COMPARACAO (enfim)  ---
    printf("\nResultado: ");

    if (a1 > a2){
        printf("\nA primeira data (%02d/%02d/%d) e a mais recente", d1, m1, a1);
    }
    else if (a2 > a1){
        printf("A segunda data (%02d/%02d/%d) e a mais recente;", d2, m2, a2);
    }
    else {
        if (m1 > m2){
            printf("A primera data (%02d/%02d/%d)", d1, m1, a1);
        }
        else if (m2 > m1){
            printf("A segunda data (%02d/%02d/%d) e a mais recente", d2, m2, a2);
        }
        else {
            if (d1 > d2){
                printf("A primeira data (%02d/%02d/%d) e a mais recente", d1, m1, a1);
            }
            else if (d2 > d1){
                printf("A segunda data (%02d/%02d/%d) e a mais recente!", d2, m2, a2);
            }
            else {
                printf("As datas sao identicas!");
            }
        }
    }

    printf("\n");
    return 0;
}
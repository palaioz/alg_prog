/*
    6. Escreva um algoritmo que leia duas datas, na forma dia, 
    mês e ano e informe qual é a mais recente. 
*/

#include <stdio.h>

int main(){
    
    int d1, m1, a1;
    int d2, m2, a2;

    printf("\n--- Comparar proximidade de datas ---\n");
    printf("\nDigite a primera data (dd mm aaaa): ");
    scanf("%d %d %d", &d1, &m1, &a1);

    printf("\nDigite a segunda data (dd mm aaaa): ");
    scanf("%d %d %d", &d2, &m2, &a2);

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
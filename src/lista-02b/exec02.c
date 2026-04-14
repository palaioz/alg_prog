/*
    2. Escreva um algoritmo que leia a altura (em metros), o peso (em quilogramas) e o sexo 
    (M ou F) de uma pessoa e calcule o peso ideal, dado por:
        Peso ideal do homem = (72,7 * altura) – 58
        Peso ideal da mulher = (62,1 * altura) – 44, 7.
    O algoritmo deve informar também se a pessoa está abaixo ou acima de seu peso ideal e em
    quantos quilos.
*/

#include <stdio.h>

int main(){

    float altura, peso;
    char genero;

    printf("Calcular o seu peso ideal\n");
    printf("Digite o seu genero (M | H): ");
    scanf("%s", &genero);
    
    if (genero != 'M' && genero != 'm' && genero != 'H' && genero != 'h'){
        printf("Digite H ou M");
        return 0;
    } 

    printf("Digite sua altura (metros): ");
    scanf("%f", & altura);

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);

    if (genero == 'M' || genero == 'm'){
        float peso_ideal_M = (72.7 * altura) - 58;
        float dif_pesos = peso_ideal_M - peso;

        printf("Peso atual: %.2f | Peso ideal: %.2f | (Peso ideal - Peso atual) = %.2f", peso, peso_ideal_M, dif_pesos);
        return 0;
        
    } else if (genero == 'H' || genero == 'h'){
        float peso_ideal_H = (62.1 * altura) - 44.7;
        float dif_pesos = peso_ideal_H - peso;

        printf("Peso atual: %.2f | Peso ideal: %.2f | (Peso ideal - Peso atual) = %.2f", peso, peso_ideal_H, dif_pesos);  
        return 0;

    } 

}
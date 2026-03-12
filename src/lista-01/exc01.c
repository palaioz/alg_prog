// ------------- EXERCÍCIO 1 --------------------
// Desenvolva um algoritmo para ler as medidas de 
// uma caixa, calcular e mostrar o seu volume

#include <stdio.h>

int main(){

    float c, l, h, volume;
    
    printf("Digite o comprimento, largura e altura (em centimetros): ");
    scanf("%f %f %f", &c, &l, &h);

    volume = c * l * h;

    printf("\nVolume da caixa: %.2f cm.", volume);

    return 0;
}
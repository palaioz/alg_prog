// ------------- EXERCÍCIO 3 --------------------
// Um carro percorreu determinada distância em determinado tempo. 
// Desenvolva o algoritmo para ler estes dados e calcular a 
// velocidade média do carro. Sabe-se que a velocidade média 
// é a razão entre a distância percorrida e o tempo para percorrê-la.

#include <stdio.h>

int main(){

    float dist, tempo, velMedia;

    printf("Distancia percorrida e tempo gasto (km h): ");
    scanf("%f %f", &dist, &tempo);

    velMedia = dist / tempo;

    printf("\nVelocidade media: %.2f km/h", velMedia);

    return 0;
}
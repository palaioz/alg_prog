// ------------- EXERCÍCIO 5 --------------------
// Escreva um algoritmo para ler o número de eleitores 
// de um município, o número de votos brancos, nulos e válidos. 
// Calcule e escreva o percentual que cada um representa em relação ao total de eleitores.

#include <stdio.h>

int main(){

    int total, brancos, nulos, validos;
    
    printf("Total de eleitores, brancos, nulos e validos: ");
    scanf("%d %d %d %d", &total, &brancos, &nulos, &validos);
    
    printf("\nBrancos: %.2f", (float)brancos/total * 100);
    printf("\nNulos: %.2f%%\n", (float)nulos/total * 100);
    printf("Validos: %.2f%%\n", (float)validos/total * 100);

    return 0;
}
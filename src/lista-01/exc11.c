// ------------- EXERCÍCIO 11 --------------------
// Um sorteio de uma Ação entre Amigos será realizado 
// entre os números 00000 e 99999. Desenvolva um 
// algoritmo para gerar aleatoriamente cada um dos dígitos do número sorteado.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int d1, d2, d3, d4, d5;

    d1 = rand() % 10;
    d2 = rand() % 10;
    d3 = rand() % 10;
    d4 = rand() % 10;
    d5 = rand() % 10;
    printf("Numero sorteado: %d %d %d %d %d", d1,d2, d3, d4, d5);


    return 0;
}
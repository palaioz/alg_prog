/*
Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos
elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor
resultante.
*/

#include <stdio.h>

int main(){
	int Avec[10], Bvec[10], Cvec[10];

	for(int i = 0; i < 10; i++){
		Avec[i] = 2 * i + 13;
		Bvec[i] = 3 * i + 42;
		Cvec[i] = Avec[i] * Bvec[i];
	}

	printf("Vetor resultante: ");
	for(int i = 0; i < 10; i++){
		printf("%d\t", Cvec[i]);
	}

	return 0;
}
/*
Escreva um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir,
conte quantos valores pares existem no vetor.
*/
#include <stdio.h>

int main(){
	int vec[20];
	int even = 0;

	for(int i = 0; i < 20; i++){
		printf("Elemento em vec[%d]: ", i);
		scanf(" %d", &vec[i]);
	}

	printf("\nLista completa: ");
	for(int i = 0; i < 20; i++){
		if(vec[i] % 2 == 0){
			even++;
		}
		printf("%d\t", vec[i]);
	}

	printf("\nExistem %d numeros pares neste vetor.", even);

	return 0;
}
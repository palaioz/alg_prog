/*
Escreva um programa que leia valores em um vetor de 5 posições. Escrever os elementos
do vetor e após escrever os elementos na ordem inversa
*/

#include <stdio.h>

int main(){
	int vec[5];
	int size = sizeof(vec) / sizeof(vec[0]);

	for (int i = 0; i < size; i++){
		printf("Digite um inteiro: ");
		scanf(" %d", &vec[i]);
	}

	for (int i = 0; i < size; i++){
		printf("%d\t", vec[i]);
	}

	printf("\n");

	for (int i = 5; i > 0; i--){
		printf("%d\t", vec[i-1]);
	}

	return 0;
}
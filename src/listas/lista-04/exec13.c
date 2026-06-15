/*
Escreva um algoritmo que leia um vetor de 15 elementos inteiros. Ordene o vetor em
ordem decrescente e exiba-o
*/

#include <stdio.h>

int main(){
	int vec[15];
	int temp;

	printf("Digite 15 numeros inteiros para preencher o vetor:\n");
	for (int i = 0; i < 15; i++){
		printf("vec[%d]: ", i);
		scanf("%d", &vec[i]);
	}

	for (int i = 0; i < 15 - 1; i++){
		for (int j = 0; j < 15 - i - 1; j++){
			if (vec[j] < vec[j + 1]){
				temp = vec[j];
				vec[j] = vec[j+1];
				vec[j + 1] = temp;
			}
		}
	}

	printf("\nVetor ordenado em ordem decrescente:\n");
	for (int i = 0; i < 15; i++){
		printf("%d ", vec[i]);
	}
	printf("\n");

	return 0;
}
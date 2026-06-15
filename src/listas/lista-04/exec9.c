/*
Escreva um algoritmo que leia um vetor de 20 posições e mostre-o. Em seguida, troque o
primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o
antepenúltimo e assim sucessivamente. Mostre o novo vetor depois da troca.
*/

#include <stdio.h>

int main(){
	int vec[20];
	int temp;

	printf("Digite 20 numeros inteiros para preencher o vetor:\n");
	for (int i = 0; i < 20; i++){
		printf("vec[%d]: ", i);
		scanf("%d", &vec[i]);
	}

	printf("\nVetor original:\n");
	for (int i = 0; i < 20; i++){
		printf("%d ", vec[i]);
	}
	printf("\n");

	for (int i = 0; i < 10; i++){
		temp = vec[i];
		vec[i] = vec[19 - i];
		vec[19 - i] = temp;
	}

	printf("\nVetor Modificado (invertido):\n");
	for (int i = 0; i < 20; i++){
		printf("%d ", vec[i]);
	}
	printf("\n");

	return 0;
}
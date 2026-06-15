/*
Faça um programa em C que declare um vetor de 20 elementos inteiros, leia os conteúdos
do vetor, e copie estes conteúdos para outro vetor, invertendo sua ordem. Assim, o valor
do primeiro elemento do primeiro vetor deve ser o valor do último elemento do segundo
vetor, por exemplo. Mostrar os conteúdos do primeiro vetor em uma linha e os do
segundo uma linha abaixo.
*/

#include <stdio.h>

int main(){
	int Avec[20] = {0};
	int Bvec[20] = {0};

	for(int i = 0; i < 20; i++){
		Avec[i] = i + 2;
	}
	
	for(int i = 0; i < 20; i++){
		Bvec[19 - i] = Avec[i];
	}

	printf("Primeiro vetor (Avec): \n");
	for (int i = 0; i < 20; i++){
		printf("%3d ", Avec[i]);
	}
	printf("\n\n");

	printf("Segundo vetor (Bvec - invertido):\n");
	for (int i = 0; i < 20; i++){
		printf("%3d ", Bvec[i]);
	}
	printf("\n");

	return 0;
}
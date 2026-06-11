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
	for(int i = 0; i < 20; i++){
		Avec[i] = i + 2;
	}
	
	int Bvec[20] = {0};
	for(int i = 19; i > 0; i--){
		for(int j = 0; j < 20; j++){
			Bvec[j] = Avec[i];
		}
	}

	for(int i = 0; i < 2; i++){
		printf("%d -> ", i+1);
		for(int j = 0; j < 20; j++){
			printf("%d\t", Avec[i]);
		}
		printf("\n");
	}

	return 0;
}
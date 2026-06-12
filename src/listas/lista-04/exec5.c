/*
Escreva um algoritmo que leia um vetor inteiro de 20 posições. Crie um segundo vetor,
substituindo os valores nulos por 2. Mostre os vetor lido e o vetor resultado.
*/

#include <stdio.h>
#include <string.h>

int main(){
	int vec[20], Novec[20];
	int size = sizeof(vec) / sizeof(vec[0]);

	for(int i = 0; i < size; i++){
		if (i % 2 == 0){vec[i] = i * 32;}
		else {vec[i] = 0;}
	}

	memcpy(Novec, vec, sizeof(vec));
	for (int i = 0; i < size; i++){
		if (Novec[i] == 0){Novec[i] = 2;}
	}

	printf("Vetor Origem: \n");
	for (int i = 0; i < size; i++){
		printf("%d\t", vec[i]);
	}

	printf("\n\nVetor Final: \n");
	for (int i = 0; i < size; i++){
		printf("%d\t", Novec[i]);
	}

	return 0;
}
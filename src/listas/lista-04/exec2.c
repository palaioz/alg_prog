/*
Escreva um algoritmo que leia um vetor com 50 posições de números inteiros, mostre
somente os positivos e por fim mostre a quantidade de números positivos no vetor.
*/

#include <stdio.h>

int main(){
	int vec[50], pos[50];
	int pos_qtd = 0;

	for(int i = 0; i < 50; i++){
		if (i % 2 == 0){vec[i] = i * 3;}
		else (vec[i] = -i);
	}

	for(int i = 0; i < 50; i++){
		if(vec[i] >= 0){
			pos[pos_qtd] = vec[i];
			pos_qtd++;
		}
	}

	printf("\nNumeros positivos: \n");
	for(int i = 0; i < pos_qtd; i++){
		printf("%d\t", pos[i]);
	}

	printf("\nExistem %d elementos positivos neste vetor.", pos_qtd);

	return 0;
}
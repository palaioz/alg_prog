/*
Faça um algoritmo que leia 2 vetores A e B, de ordem 8, e calcule o produto escalar do
vetor. O produto escalar é obtido da seguinte forma:
*/

#include <stdio.h>
int main(){
	float Avec[8], Bvec[8];
	float Cvec[8];

	for (int i = 0; i < 8; i++){
		printf("\nDigite o elemento Avec[%d]: ", i);
		scanf("%f", &Avec[i]);
	}
	
	for (int j = 0; j < 8; j++){
		printf("\nDigite o elemento Avec[%d]: ", j);
		scanf("%f", &Bvec[j]);
	}

	for (int k = 0; k < 8; k++){
		Cvec[k] = Avec[k] * Bvec[k];
	}

	printf("\n");

	for (int l = 0; l < 8; l++){
		printf("Cvec[%d] == %.2f\n", l, Cvec[l]);
	}
	
	return 0;
}
/*
Escreva um algoritmo que leia um vetor de 80 elementos inteiros. Encontre e mostre o
menor elemento e a sua posição.
*/

#include <stdio.h>

int minimumValue(int arr[], int size_arr){
	// considerar primeiro elemento como menor
	int min = arr[0];
	for (int i = 1; i < size_arr; i ++){
		// atualizar se arr[i] for menor
		if (arr[i] < min){
			min = arr[i];
		}
	}

	return min;
}

int main(){
	int vec[80];
	int size_arr = sizeof(vec) / sizeof(vec[0]);

	for(int i = 0; i < 80; i++){
		if (i % 2 == 0){vec[i] = i;}
		else {vec[i] = -i;}
	}

	printf("%d\n", minimumValue(vec, size_arr));

	return 0;
}
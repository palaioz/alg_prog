/*
1. Faça um algoritmo para calcular e escrever a tabuada dos números de 1 a 10.
*/

#include <stdio.h>

int main(){
	
	for (int i = 1; i < 11; i++){
		printf("Tabuada do %d\n", i);
		printf("----------------\n");
		for (int j = 1; j < 11; j++){
			printf("%d\n", j * i);
		}
		printf("\n");
	}

	return 0;
}
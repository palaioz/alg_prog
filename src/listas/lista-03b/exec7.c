/*
7. Desenvolva um algoritmo que leia n números e mostre o maior e o menor número lido.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int numMaior, numMenor;
	int loc;
	
	printf("Digite um numero: ");
	scanf("%d", &loc);
	
	numMaior = loc;
	numMenor = loc;

	while(1){
		system("cls");
		if (numMaior && numMenor){
			printf("Maior Numero: %d\n", numMaior);
			printf("Menor Numero: %d\n", numMenor);
		}

		printf("Digite outro numero: \n");
		scanf("%d", &loc);
	
		if (loc > numMaior){
			numMaior = loc;
		} else if (loc < numMenor){
			numMenor = loc;
		} else {
			continue;
		}

	}

	return 0;
}
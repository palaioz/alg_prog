/*
8. Faça um algoritmo para ler um número natural e calcular quantos são múltiplos deste
número maiores que ele e menores que 1000.
*/

#include <stdio.h>

int main(){
	int num;
	int res = 1;

	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &num);

	printf("\nMultiplos ate 1000: \n");
	for (int i = 1; i < 1000; i++){
		if (res >= 1001){
			return 0;
		}
		res = num * i;
		printf("%d\t", res);
	}

	return 0;
}
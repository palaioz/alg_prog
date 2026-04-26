/*
	Ler 10 números digitados pelo usuário e mostrar se cada um é par ou ímpar
*/

#include <stdio.h>

int main(){
	int n, x;

	for(x = 1; x <= 10; x++){
		printf("Digite um numero: ");
		scanf("%d", &n);

		if (n % 2 == 0){
			printf("Par\n");
		} else{
			printf("Impar\n");
		}
	}
	
	return 0;
}
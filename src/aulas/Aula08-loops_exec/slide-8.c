/*
	Mostrar na tela os números de um número informado pelo usuário até 1 (contagem regressiva)
*/

#include <stdio.h>

int main(){
	int n, a;

	printf("Digite um numero maior que zero: ");
	scanf("%d", &n);

	if (n > 0){
		for(a = n; a >= 1; a--){
			printf("%d\t", a);
		}
	} else {
		printf("O numero deve ser maior que zero!");
	}


	return 0;
}
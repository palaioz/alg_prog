/*
	Mostrar na tela s números de 1 até um número informado pelo usuário (contagem progressiva)
*/

#include <stdio.h>

int main(){
	int n, a;

	printf("Digite um numero maior que zero: ");
	scanf("%d", &n);

	if (n > 0){
		for(a = 1; a<= n; a++){
			printf("%d\t", a);
		}
	} else {
		printf("O numero deve ser maior que zero!");
	}

	return 0;
}
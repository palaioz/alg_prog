// 5. Faça um algoritmo para ler um valor numérico e calcular e escrever o seu fatorial

#include <stdio.h>

int main(){
	int fact = 1;
	int num;

	printf("Digite um numero inteiro: ");
	scanf("%d", &num);

	for (int i = 1; i < num; i++){
		fact += (i * fact);
	}

	printf("Fatorial: %d", fact);

	return 0;
}
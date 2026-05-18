/*
2. Faça um algoritmo para ler um número menor que 1000 e calcular e mostrar todos os
números ímpares maiores que o número lido e menores que 1000.
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int num;

	printf("Escolha um número inteiro menor que 1000: ");
	scanf("%d", &num);

	if (num > 1000){
		printf("O número deve ser menor que 1000");
	}

	for (num; num < 1001; num++){
		if (num % 2 != 0){
			printf("%d\t", num);
		}
	}
	
	return 0;
}
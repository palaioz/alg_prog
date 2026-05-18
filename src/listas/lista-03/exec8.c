// 8. Ler o salário de 10 funcionários e calcular a média de salários.

#include <stdio.h>

int main(){
	float soma_salario;
	float media;
	float salario;

	printf("Digite o salario dos funcionarios");

	for (int i = 1; i < 11; i++){
		printf("Funcionario %d: ", i);
		scanf("%f", &salario);
		soma_salario += salario;
	}

	media = soma_salario / 10;

	printf("A media dos salarios e R$%.2f", media);
	
	return 0;
}
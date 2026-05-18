/*
7. Exibir as potências de um número (base) elevado a um intervalo de expoentes. Por
exemplo, se o usuário digitar o número 2 e o intervalo de potências 2 a 5, o algoritmo
deve exibir o resultado das potências de 2^n, tal que 2 <= n <= 5. Utilize a função pow.
*/

#include <stdio.h>
#include <math.h>

int main(){
	double base;
	int exp_inicio, exp_fim;

	printf("\nDigite o numero base: ");
	scanf("%lf", &base);

	printf("\nDigite o inicio do intervalo de expoentes: ");
	scanf("%d", &exp_inicio);

	printf("\nDigite o fim do intervalo de expoentes: ");
	scanf("%d", &exp_fim);

	printf("\nResultados das potencias de %.2lf^n, tal que %d <= n <= %d:\n", base, exp_inicio, exp_fim);
	printf("-----------------------------------------------------\n");

	for (int n = exp_inicio; n <= exp_fim; n++){
		double resultado = pow(base, n);

		printf("%.0f^%d = %.0f\n", base, n, resultado);
	}

	printf("------------------------------------------\n");

	return 0;
}
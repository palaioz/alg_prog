/*
3. Faça um algoritmo para ler dois números inteiros. Calcular e mostrar o valor resultante se
elevarmos a base representada pelo primeiro à potência representada pelo segundo.
*/

#include <stdio.h>
#include <math.h>

int main(){

	int num1, num2;

	printf("Digite dois inteiros: ");
	scanf("%d %d", &num1, &num2);
	
	double pot = pow(num1, num2);

	printf("Resultado -> %.2f", pot);
	
	return 0;
}
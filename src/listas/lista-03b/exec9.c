/*
9. Faça um algoritmo para calcular o resultado de um valor A elevado a um expoente B. Os
valores A e B devem ser lidos. Não utilize a função pow.
*/

#include <stdio.h>

int main(){
	int base, exp;
	int res = 1;

	printf("Digite um numero base e uma potencia: ");
	scanf("%d %d", &base, &exp);	

	for (int i = 0; i < exp; i++) {
        res *= base;
    }

	printf("Resultado = %d", res);

	return 0;
}
/*
7. Exibir as potências de um número (base) elevado a um intervalo de expoentes. Por
exemplo, se o usuário digitar o número 2 e o intervalo de potências 2 a 5, o algoritmo
deve exibir o resultado das potências de 2^n, tal que 2 <= n <= 5. Utilize a função pow.
*/

#include <stdio.h>
#include <math.h>

int main(){

	printf("Hello World\n");
	float res = pow(2, 2);
	printf("%.2f", res);
	return 0;
}
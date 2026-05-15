/*
4. Existem números de 4 dígitos (entre 1000 e 9999) que obedecem à seguinte característica:
se dividirmos o número em dois números de dois dígitos, um composto pela dezena e pela
unidade, e outro pelo milhar e pela centena, somarmos estes dois novos números gerando
um terceiro, o quadrado deste terceiro número é exatamente o número original de quatro
dígitos. Por exemplo:
	2025 -> dividindo: 20 e 25 -> somando temos 45 -> 45² = 2025.
Escreva um programa para calcular todos os números que obedecem a esta característica.
*/

#include <stdio.h>
int main(){

	int n, p1, p2;
	int soma;

	for (n = 1000; n < 10000; n++){
		p1 = n / 100;
		p2 = n % 100;

		soma = p1 + p2;

		int pot = soma * soma;
		
		if (pot == n){
			printf("%d\n", pot);
		}
	}

	return 0;
}


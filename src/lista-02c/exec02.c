/*
	2. Desenvolva um programa para ler um número inteiro de 1 a 12, que corresponde a um dos
	meses do ano, e outro número inteiro que corresponde ao ano. Encontre e mostre o número de dias
	referente ao mês informado.
*/

#include <stdio.h>

int main(){
	int dias, mes, ano;

	printf("Digite o numero do mes (1-12): ");
	scanf("%d", &mes);
	printf("Digite o numero do ano: ");
	scanf("%d", &ano);

	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 10 || mes == 12){
		dias += 31;
	} 

	if (mes == 2){
		dias += 28;
	}

	if (mes == 4 || mes == 6 || mes == 8 || mes == 9 || mes == 11){
		dias += 30;
	}
	printf("Hello World");
	return 0;
}
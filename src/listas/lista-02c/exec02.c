/*
	2. Desenvolva um programa para ler um número inteiro de 1 a 12, que corresponde a um dos
	meses do ano, e outro número inteiro que corresponde ao ano. Encontre e mostre o número de dias
	referente ao mês informado.
*/

#include <stdio.h>

int ano_bissexto(int ano){
	if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
		return 1;
	} 
	return 0;
}

int dias_mes(int mes, int ano){
	switch (mes){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			return 31;
		case 4: case 6: case 9: case 11:
			return 30;
		case 2:
			return ano_bissexto(ano) ? 29 : 28;
		default:
			return -1;
	}
}

int main(){
	int mes, ano;

	printf("Digite o mes (1-12): ");
	scanf("%d", &mes);
	printf("\nDigite o ano: ");
	scanf("%d", &ano);

	int dias = dias_mes(mes, ano);
	if (dias == -1){
		printf("\nMes invalido!\n");
	} else {
		printf("\nO mes %d/%d tem %d dias.\n", mes, ano, dias);
	}

	return 0;
}
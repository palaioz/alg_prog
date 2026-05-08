/*
	4. Escreva um programa que pede para o usuário digitar um número que corresponda a um
	dia da semana. O programa deve apresentar na tela o nome do dia. Utilize o comando
	switch.
*/

#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(){
	int num_dia;

	printf("Digite o numero do dia da semana (1-7): ");
	scanf("%d", &num_dia);

	switch (num_dia){
	case 1:
		printf("Dia 1: Domingo");
		return 0;
	case 2:
		printf("Dia 2: Segunda");
		return 0;
	case 3:
		printf("Dia 3: Terca");
		return 0;
	case 4:
		printf("Dia 4: Quarta");
		return 0;
	case 5:
		printf("Dia 5: Quinta");
		return 0;
	case 6:
		printf("Dia 6: Sexta");
		return 0;
	case 7:
		printf("Dia 7: Sabado");
		return 0;
	
	default:
		printf("Digite um inteiro entre 1 e 7!");
		return 0;
	}

}
/*
	3. Ler a idade de uma pessoa expressa em anos, meses e dias. O algoritmo deve mostrar a
	idade da pessoa em dias (considere que todos os anos tem 365 dias e todos os meses tem 30 dias).
*/

#include <stdio.h>

int main(){
	int anos, meses, dias;

	printf("Digite sua idade (anos meses dias): ");
	scanf("%d %d %d", &anos, &meses, &dias);

	int idade_em_dias = (anos * 365) + (meses * 30) + dias;

	printf("Sua idade em dias: %d dias.", idade_em_dias);

	return 0;
}
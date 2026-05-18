/*
6. Calcule o valor de y na seguinte função: y = 4x + 3.
	a. Faça a primeira versão com o x variando de -7 até 15.
	b. Construa uma outra versão deste algoritmo, onde o intervalo de variação do x é
	informado pelo usuário.
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

	int input;
	int intervaloMenor, intervaloMaior;

	printf("Escolha uma opção:");
	printf("\n1 - Intervalo teste (-7 -> 15)");
	printf("\n2 - Escolha o intervalo\n");
	scanf("%d", &input);

	switch (input)
	{
	case 1:
		printf("Equação: y = 4x + 3");
		printf("\n-------------------\n");
	
		for (int i = -7; i < 16; i++){
			printf("x = %d | y = %d\n", i, ((i *4) + 3));
		}
		
		break;
	
	case 2: 

		printf("Escolha o intervalo menor e o maior (int int): ");
		scanf("%d %d", &intervaloMenor, &intervaloMaior);

		for (int i = intervaloMenor; i < intervaloMaior + 1; i++){
			printf("x = %d | y = %d\n", i, ((i *4) + 3));
		}		

	default:
		break;
	}

	return 0;
}
/*
Ler uma matriz 3 x 2 e um número informados pelo usuário. O algoritmo deve gerar uma nova matriz que é
o resultado da multiplicação do número pela matriz lida.
*/

#include <stdio.h>

int main(){
	int matriz[3][2], nova_matriz[3][2];
	int escalar;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("\nDigite o elemento matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}

	printf("\nDigite um escalar para multiplicar a matriz: ");
	scanf("%d", &escalar);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			nova_matriz[i][j] = matriz[i][j] * escalar;
		}
	}

	printf("\nAntiga matriz: ");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("\nmatriz[%d][%d]: %d", i, j, matriz[i][j]);
		}
	}

	printf("\n\nNova matriz: ");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("\nnova_matriz[%d][%d]: %d", i, j, nova_matriz[i][j]);
		}
	}


	return 0;
}
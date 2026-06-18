/*
Ler uma matriz informada pelo usuário, com tamanho 3 x 5. Mostrar seus elementos
*/

#include <stdio.h>

int main(){
	int matriz[3][5];
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("\nDigite o elemento matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}

	printf("\nMatriz completa: ");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("\nMatriz[%d][%d]: %d", i, j, matriz[i][j]);
		}
	}
	
	return 0;
}
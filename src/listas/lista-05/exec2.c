/*
2. Escreva um programa em C que gere os elementos de uma matriz quadrada 5 x 5 e:
 Exiba todos os elementos da matriz
 Exiba os elementos da diagonal principal da matriz
 Calcule e mostre a média dos valores da diagonal principal da matriz
 Calcule e mostre a média dos elementos da matriz
 Encontre e mostre na tela os elementos que estão acima da média, com sua posição (índice de linha e
coluna)
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

	int matriz[5][5];
	int calc_diagonal = 0;
	int cont_diagonal = 0;
	int soma_matriz = 0;
	int media_total;

	// ------ GERANDO A MATRIZ ------
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			matriz[i][j] = i * j;
		}
	}

	printf("=======================");
	printf("\nOPERAÇÕES COM MARIZES");
	printf("\n=======================\n");

	// ------ MOSTRANDO TODOS OS ELEMENTOS DA MATRIZ ------
	printf("Matriz completa");
	printf("\n----------------------\n");
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			soma_matriz += matriz[i][j];
			printf("\t%d", matriz[i][j]);
		}
		printf("\n");
	}

	// ------ DIAGONAL DA MATRIZ ------
	printf("\nDiagonal principal");
	printf("\n----------------------\n");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i != j)
			{
				continue;
			}
			
			calc_diagonal += matriz[i][j];
			cont_diagonal += 1;
			printf("\nMatriz[%d][%d] ==  %d", i, j, matriz[i][j]);
		}
	}


	// ------ MÉDIA DIAGONAL DA MATRIZ ------
	printf("\n\nMédia diagonal princpial: %d", calc_diagonal / cont_diagonal);

	// ------ MÉDIA DE TODA A MATRIZ ------
	media_total = soma_matriz / 25;
	printf("\n\nMédia total: %d", media_total);

	// ------ "DESVIO PADRÃO" DA MÉDIA DA MATRIZ ------
	printf("\n\nNúmeros acima da média total");
	printf("\n----------------------\n");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (matriz[i][j] < media_total)
			{
				continue;
			}

			printf("\nMatriz[%d][%d]: %d", i, j, matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}
/*
Em um concurso, a identificação das cadeiras da sala são armazenadas em uma matriz. Considere que
existem 6 filas de cadeiras na sala e cada fila possui 7 cadeiras. Desenvolva um algoritmo com uma matriz
para armazenar a identificação das cadeiras que é informada pelo usuário. A matriz deve ser exibida. Após,
apresentar ao usuário a mensagem: “Insira o número da fila:” para que o algoritmo leia o número de uma
fila e mostra a identificação de todas as cadeiras desta fila.
*/

#include <stdio.h>

#define FILAS 6
#define CADEIRAS 7

int main(){
	int sala[FILAS][CADEIRAS];
	int i, j, fila_escolhida;

	printf("--- Cadastro das Cadeiras ---\n");
	for(i = 0; i < FILAS; i++)
	{
		for(j = 0; j < CADEIRAS; j++)
		{
			printf("Digite a identificacao da cadeira da fila %d, posicao %d: ", i + 1, j + 1);
			scanf("%d", &sala[i][j]);
		}
	}

	printf("\n--- Mapa da Sala --\n");
	for(i = 0; i < FILAS; i++)
	{
		printf("Fila %d: ", i + 1);
		for(j = 0; j < CADEIRAS; j++)
		{
			printf("[%d] ", sala[i][j]);
		}
		printf("\n");
	}

	printf("\nInsira o numero da fila: ");
	scanf("%d", &fila_escolhida);

	if(fila_escolhida >= 1 && fila_escolhida <= FILAS)
	{
		printf("\nCadeiras da fila %d:\n", fila_escolhida);
		for(j = 0; j < CADEIRAS; j++)
		{
			printf("[%d]", sala[fila_escolhida - 1][j]);
		}
		printf("\n");
	} else {
		printf("Fila invalida! A sala possui filas de 1 a %d.\n", FILAS);
	}

	return 0;
}
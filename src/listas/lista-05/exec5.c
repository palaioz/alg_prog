/*
5. Um produtor organizou as áreas de sua lavoura da seguinte forma:
			A00 A01 A02 A03
			A10 A11 A12 A13
Em cada área, ele aplicou diferentes formas de tratamento do solo e das plantas (insumos, pesticidas...).
Após realizar a colheita, ele armazenou os dados da produtividade (quantidade de sacos/hectare) de cada
uma das áreas.
a) Utilize uma matriz para armazenar os valores da produtividade de cada área
b) Leia os dados armazenados em cada área
c) Calcule e exiba a média de produtividade da lavoura
d) Identifique e mostre as áreas que produziram acima da média e abaixo da média
*/

#include <stdio.h>

#define LINHAS 2
#define COLUNAS 4

int main(){
	float lavoura[LINHAS][COLUNAS];
	float soma = 0.0, media = 0.0;
	int i, j;
	

	// Armazenar os índices de produtividade
	printf("\n--- Cadastro de Produtividade (Sacos/Hectare) ---\n");
	for(i = 0; i < LINHAS; i++)
	{
		for(j = 0; j < COLUNAS; j++)
		{
			printf("Digite a produtividade da area A[%d][%d]: ", i, j);
			scanf("%f", &lavoura[i][j]);
			soma += lavoura[i][j];
		}
	}

	// Média de produtividade
	media = soma / (LINHAS * COLUNAS);
	printf("\n-----------------------------------------");
	printf("\nMedia de produtividade da lavoura: %.2f sacos/hectare", media);
	printf("\n-----------------------------------------\n");

	// Áreas acima e abaixo da média
	printf("\n--- Analise de Desempenho por Area ---\n");
	for(i = 0; i < LINHAS; i++)
	{
		for(j = 0; j < COLUNAS; j++)
		{
			printf("Area A[%d][%d] (%.2f sacos/hectare): ", i, j, lavoura[i][j]);

			if(lavoura[i][j] > media){
				printf("ACIMA DA MEDIA\n");
			} else if(lavoura[i][j] < media){
				printf("ABAIXO DA MEDIA\n");
			} else {
				printf("NA MEDIA\n");
			}
		}
	}
	
	return 0;
}
/*
Escreva um algoritmo para ler um vetor de inteiros e positivos e imprimir quantas vezes
aparecem o números 2, 4 e 8. O vetor terá no máximo 100 posições. Sair do programa
quando for digitado -1 ou quando atingir o máximo de posições do vetor
*/

#include <stdio.h>
int main(){
	int vec[100];
	int num;
	int cont2 = 0, cont4 = 0, cont8 = 0;
	int i = 0;

	printf("Digite numeros inteiros e positivos.\n");
	printf("Para encerrar antes de 100 entradas, digite -1.\n\n");

	while (i < 100){
		printf("Vec[%d]: ", i);
		scanf("%d", &num);

		if (num == -1){
			break;
		}

		if (num >= 0){
			vec[i] = num;

			switch (num)
			{
			case 2:
				cont2++;
				break;
			case 4:
				cont4++;
				break;
			case 8:
				cont8++;
				break;
			
			default:
				break;
			}

			i++;
		} else {
			printf("Numero invalido! Digite apenas positivos ou -1 para sair.\n");
		}
	}

	printf("\n--------------------------------------------------\n");
	printf("Leitura finalizada! Total de numeros inseridos: %d\n", i);
	printf("\n--------------------------------------------------\n");
	printf("Quantidade de vezes que o numero 2 apareceu: %d\n", cont2);
	printf("Quantidade de vezes que o numero 4 apareceu: %d\n", cont4);
	printf("Quantidade de vezes que o numero 8 apareceu: %d\n", cont8);
	printf("\n--------------------------------------------------\n");

	return 0;
}
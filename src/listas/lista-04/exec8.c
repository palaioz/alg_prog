/*
Faça um algoritmo que leia um vetor V de 10 posições e, após, verifica se um número N,
fornecido pelo usuário, existe no vetor. Se existir, indicar a(s) posição(ões), senão
escrever a mensagem "O número fornecido não existe no vetor!".
*/

#include <stdio.h>

int main(){
	int vec[10];
	int N;
	int encontrado = 0;

	printf("Preencha o vetor com 10 numeros inteiros:\n");
	for (int i = 0; i < 10; i++){
		printf("vec[%d]: ", i);
		scanf("%d", &vec[i]);
	}

	printf("Digite um numero N que deseja buscar no vetor: ");
	scanf("%d", &N);

	printf("\n");
	for (int i = 0; i < 10; i++){
		if (vec[i] == N){
			printf("Numero %d encontrado em vec[%d]\n", N, i);
			encontrado = 1;
		}
	}
	
	if (!encontrado){
		printf("O numero fornecido nao existe no vetor!\n");
	}

	return 0;
}
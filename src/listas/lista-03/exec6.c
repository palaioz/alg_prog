/*
6. Faça um algoritmo para ler dois valores inteiros. O primeiro representa o primeiro
elemento de uma progressão aritmética (PA) e o segundo a razão desta progressão
aritmética. Calcule e mostre os 10 elementos seguintes.
*/

#include <stdio.h>

int main(){
	int p1, razao;

	printf("Digite o primeiro termo e a razao da progressao aritmetica: ");
	scanf("%d %d", &p1, &razao);

	for (int i = 1; i < 11; i++){
		printf("Elem. %d = %d\n", i, p1);
		p1 += razao;
	}
	
	return 0;
}
// 1. Ler dois números e mostrar os números pares do intervalo.

#include <stdio.h>

int main(){
	int n1, n2, aux, x;
	int quant = 0;
	
	printf("Informe 2 numeros que representam um intervalo: ");
	scanf("%d %d", &n1, &n2);

	if (n1 > n2){
		aux = n1;
		n1 = n2;
		n2 = aux;
	}

	for(x = n1; x <= n2; x++){
		if (x % 2 == 0){
			printf("%d\t", x);
			quant++;
		}
	}
	printf("\nNumeros encontrados: %d", quant);
	
	return 0;
}
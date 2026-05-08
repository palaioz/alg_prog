// 2. Ler dois números e calcular o somatório dos números do intervalo.

#include <stdio.h>

int main(){
	int n1, n2, aux, x;
	int soma;
	
	printf("Informe 2 numeros que representam um intervalo: ");
	scanf("%d %d", &n1, &n2);

	if (n1 > n2){
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	
	for(x = n1; x <= n2; x++){
		soma += x;
	}
	
	printf("Soma dos numeros no intervalo [%d, %d]: %d", n1, n2, soma);
	
	return 0;
}
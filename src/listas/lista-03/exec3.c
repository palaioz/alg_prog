// 3. Somar uma sequencia de números digitados enquanto os números são diferentes de zero

#include <stdio.h>
#include <stdlib.h>

int main(){
	float num, soma = 0;
	int input;

	printf("====== SOMA ======");
	printf("\nSelecione um metodo:");
	printf("\n1 - Somar em tempo real");
	printf("\n2 - Somar ao final da conta");
	printf("\n(Em ambos os casos, digite 0 para parar)");
	printf("\nOpcao: ");
	scanf("%d", &input);

	if (input == 1){
		while(1){
			system("cls");
			printf("Resultado atual: %.2f", soma);
			printf("\nDigite um numero para adicionar ou subtrair: ");
			scanf("%f", &num);
	
			if (num == 0){
				break;
			}
	
			soma += num;
		}
	} else if (input == 2){
		int total_lista;
		
		printf("Quantos numeros deseja somar? ");
		scanf("%d", &total_lista);
		
		float lista_num[total_lista];
		
		for (int i = 0; i < total_lista; i++){
			printf("\nDigite um numero para adicionar ou subtrair: ");
			scanf("%f", &num);
	
			if (num == 0){
				break;
			}

			lista_num[i] = num;
		}

		for (int i = 0; i < total_lista; i++){
			soma += lista_num[i];
		}
		printf("%.2f", soma);
	}
	
	return 0;
}
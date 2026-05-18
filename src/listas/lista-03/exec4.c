/* 
4. Contar a quantidade de números pares e ímpares digitados 
por um usuário enquanto o número for diferente de zero.
*/

#include <stdio.h>

int main(){
	int user_input;
	int count_impar = 0, count_par = 0;
	
	while(user_input != 0){
		printf("Impares = %d\n", count_impar);
		printf("Pares = %d\n", count_par);

		printf("Digite um numero inteiro ( digite 0 para encerrar ): ");
		scanf("%d", &user_input);

		if (user_input % 2 == 0){
			count_par++;
			continue;
		} else {
			count_impar++;
			continue;
		}
	}

	return 0;
}
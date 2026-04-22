/*
	8. Escreva um algoritmo que leia o número de inscrição de um nadador, sua idade e sexo (F
	ou M). O algoritmo deve escrever a categoria do nadador, conforme a tabela:

		|            IDADE              | 		SEXO       |		CATEGORIA
		|          6 a 8 anos           |        F         | 	  Infantil A - F
		|    	   6 a 8 anos	        |        M         |	  Infantil A - M
		|   	   9 a 11 anos		    |      F ou M      |	  Infantil B
		|   	   12 a 14 anos		    |      F ou M      |	  Juvenil A 

*/

#include <stdio.h>
#include <string.h>

int main() {
    int n_inscricao, idade;
    char sexo; 
    const char *categoria;

    printf("\nNumero de inscricao: ");
    scanf("%d", &n_inscricao);

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Sexo (M/F): ");
    scanf(" %c", &sexo); 

    if (idade < 0) {
        categoria = "IDADE INVALIDA (negativa)";
    } else if (idade >= 6 && idade <= 8) {
        if (sexo == 'M') {
            categoria = "Infantil A - M";
        } else if (sexo == 'F') {
            categoria = "Infantil A - F";
        } else {
            categoria = "SEXO INVALIDO";
        }
    } else if (idade >= 9 && idade <= 11) {
        if (sexo == 'M' || sexo == 'F') {
            categoria = "Infantil B";
        } else {
            categoria = "SEXO INVALIDO";
        }
    } else if (idade >= 12 && idade <= 14) {
        if (sexo == 'M' || sexo == 'F') {
            categoria = "Juvenil A";
        } else {
            categoria = "SEXO INVALIDO";
        }
    } else {
        categoria = "IDADE INVALIDA PARA PARTICIPACAO";
    }

    printf("\nNumero de inscricao: %d", n_inscricao);
    printf("\nIdade: %d", idade);
    printf("\nSexo: %c", sexo);
    printf("\nCategoria: %s\n", categoria);

    return 0;
}
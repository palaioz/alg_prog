/*
	6. Determine e informe a faixa etária de uma pessoa, a partir do seu ano de nascimento e do
	ano atual. Faixas:
		 0 a 9 anos: criança
		 10 a 11 anos: pré-adolescente
		 12 a 18 anos: adolescente
		 18 a 25 anos: jovem
		 26 a 59 anos: adulto
		 60 em diante: idoso
*/

#include <stdio.h>

int main(){
	int idade;
	const char *faixa_etaria;

	printf("Digite uma idade: ");
	scanf("%d", &idade);

	if (idade >= 60){
		faixa_etaria = "IDOSO";
	} else if (idade < 60 && idade >= 26){
		faixa_etaria = "ADULTO";
	} else if (idade < 26 && idade >= 18){
		faixa_etaria = "JOVEM";
	} else if (idade < 18 && idade >= 12){
		faixa_etaria = "ADOLESCENTE";
	} else if (idade < 12 && idade >= 10){
		faixa_etaria = "PRE-ADOLESCENTE";
	} else if (idade < 10 && idade >= 0){
		faixa_etaria = "CRIANCA";
	} else {
		printf("Digite uma idade valida!");
		return 0;
	}

	printf("Faixa etaria: %s", faixa_etaria);

	return 0;
}
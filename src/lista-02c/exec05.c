/*
	5. Fazer um algoritmo que leia valores para as variáveis hora, minuto e segundo; verificando e
	escrevendo se elas correspondem a um horário válido ou não. Para um horário ser válido, a hora
	deve estar no intervalo de 0 a 23, o minuto e o segundo no intervalo de 0 a 59.
*/

#include <stdio.h>

int main(){
	int horas, minutos, segundos;
	const char *validacao_horario = "VALIDO";

	printf("Digite um horario (horas minutos segundos): ");
	scanf("%d %d %d", &horas, &minutos, &segundos);

	if ((horas < 0 || horas > 23) || (minutos < 0 || minutos > 59) || (segundos < 0 || segundos > 59)){
		validacao_horario = "INVALIDO";
	}

	printf("Horario %s\n", validacao_horario);
	printf("%02d:%02d:%02d", horas, minutos, segundos);

	return 0;
}
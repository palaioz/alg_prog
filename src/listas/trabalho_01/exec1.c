/*
1. Em uma fazenda existem 20 bois. Cada boi tem no seu pescoço um cartão contendo um
número de identificação e seu peso. Escreva um algoritmo que recebe como entrada o
número de identificação e o peso dos 20 bois. Após a leitura dos dados,o algoritmo deve
mostrar:
a) O número e o peso do boi mais gordo
b) O número e o peso do boi mais magro
c) A média de peso dos bois
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

	int qtd_bois = 20;

	int num_boi;
	float peso_boi;

	int lista_num[20] = {0};
	float lista_pesos[20] = {0};
	
	// ---------- INPUT

	for (int i = 0; i < qtd_bois; i++){
		// printf("Digite o número de série do animal: ");
		// scanf("%d", &num_boi);
		// printf("Digite o peso do animal (em kg): ");
		// scanf("%f", &peso_boi);

		num_boi = i + 1;
		peso_boi = i * 20;

		lista_num[i] = num_boi;
		lista_pesos[i] = peso_boi;
	}

	// ---------- MAX & MIN & MÉDIA


	// ---------- OUTPUT

	for (int i = 0; i < qtd_bois; i++){
		printf("N° de série: 0%d \t|\t Peso: %.2f\n", lista_num[i], lista_pesos[i]);
	}

	return 0;
}
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
    int lista_num[20] = {0};
    float lista_pesos[20] = {0};

    int id_gordo, id_magro;
    float peso_gordo, peso_magro;
    float soma_pesos = 0.0;

    // ---------- INPUT
    for (int i = 0; i < qtd_bois; i++){
        printf("Digite o número de identificação do %dº boi: ", i + 1);
        scanf("%d", &lista_num[i]);
        printf("Digite o peso do animal (em kg): ");
        scanf("%f", &lista_pesos[i]);
    }

    // ---------- MAX & MIN & MÉDIA
    peso_gordo = lista_pesos[0];
    id_gordo = lista_num[0];
    peso_magro = lista_pesos[0];
    id_magro = lista_num[0];

    for (int i = 0; i < qtd_bois; i++){
        soma_pesos += lista_pesos[i];

        if (lista_pesos[i] > peso_gordo) {
            peso_gordo = lista_pesos[i];
            id_gordo = lista_num[i];
        }
        if (lista_pesos[i] < peso_magro) {
            peso_magro = lista_pesos[i];
            id_magro = lista_num[i];
        }
    }

    // ---------- OUTPUT
    printf("\n---------------- RELATÓRIO FINAL ----------------\n");
    printf("Boi mais gordo \t|\t ID: %d \t|\t Peso: %.2f kg\n", id_gordo, peso_gordo);
    printf("Boi mais magro \t|\t ID: %d \t|\t Peso: %.2f kg\n", id_magro, peso_magro);
    printf("Média de peso dos bois: %.2f kg\n", soma_pesos / qtd_bois);
    printf("-------------------------------------------------\n");

    return 0;
}

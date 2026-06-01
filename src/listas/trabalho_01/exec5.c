/*
5. Para uma pesquisa a respeito do consumo mensal de energia elétrica em determinada
cidade, são fornecidos os seguintes dados dos consumidores: código do consumidor,
quantidade de kWh consumidos durante o mês, tipo de consumidor (residencial
representado pela letra ‘R’; comercial - respresentado pela letra ‘C’; e industrial -
representado pela letra ‘I’). Escreva um algoritmo que calcule e escreva os seguintes
resultados:	
 o menor consumo dentre os consumidores residenciais e o código desse
consumidor;
 o maior consumo dentre os consumidores industriais e o código desse consumidor;
 a média geral de consumo de toda cidade.
O algoritmo para de ler dados quando o tipo de consumidor fornecido for ‘X’.
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char tipo;
    int codigo;
    float kwh;

    int cod_menor_r, cod_maior_i;
    float menor_r, maior_i;
    
    float soma_geral = 0.0;
    int total_clientes = 0;
    
    int flag_r = 0, flag_i = 0;

    while (1) {
        // ---------- INPUT
        printf("\nTipo do consumidor [R / C / I] (ou X para encerrar): ");
        scanf(" %c", &tipo);

        if (tipo == 'X' || tipo == 'x') {
            break;
        }

        printf("Código de identificação: ");
        scanf("%d", &codigo);
        printf("Consumo mensal (kWh): ");
        scanf("%f", &kwh);

        // ---------- PROCESSAMENTO
        soma_geral += kwh;
        total_clientes++;

        // Regras para residencial
        if (tipo == 'R' || tipo == 'r') {
            if (flag_r == 0 || kwh < menor_r) {
                menor_r = kwh;
                cod_menor_r = codigo;
                flag_r = 1;
            }
        }
        // Regras para industrial
        else if (tipo == 'I' || tipo == 'i') {
            if (flag_i == 0 || kwh > maior_i) {
                maior_i = kwh;
                cod_maior_i = codigo;
                flag_i = 1;
            }
        }
    }

    // ---------- OUTPUT
    printf("\n================ RESULTADOS DA PESQUISA ================\n");
    
    if (flag_r) {
        printf("Menor consumo residencial \t|\t Código: %d \t|\t Consumo: %.2f kWh\n", cod_menor_r, menor_r);
    } else {
        printf("Menor consumo residencial \t|\t Sem registros cadastrados.\n");
    }

    if (flag_i) {
        printf("Maior consumo industrial  \t|\t Código: %d \t|\t Consumo: %.2f kWh\n", cod_maior_i, maior_i);
    } else {
        printf("Maior consumo industrial  \t|\t Sem registros cadastrados.\n");
    }

    if (total_clientes > 0) {
        printf("Média geral de consumo da cidade: %.2f kWh\n", soma_geral / total_clientes);
    }
    printf("========================================================\n");

    return 0;
}

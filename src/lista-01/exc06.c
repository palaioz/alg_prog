// ------------- EXERCÍCIO 6 --------------------
// Um motorista de taxi deseja calcular o rendimento de seu carro na praça. Escreva um algoritmo para ler 
// o valor do litro do combustível (em R$), a marcação do odômetro no início do dia, a marcação do 
// odômetro no final do dia, o número de litros de combustível gasto e o valor total (R$) recebido dos 
// passageiros. Calcule e escreva a média do consumo em Km/l e o lucro líquido do dia.

#include <stdio.h>

int main(){

    float precoLitro, odoInicio, odoFim, litros, recebido;
    printf("Preco litro, Odo Inicio, Odo Fim, Litros gastos, Valor recebido: \n");
    scanf("%f, %f, %f, %f", &precoLitro, &odoInicio, &odoFim, &litros, &recebido);
    
    float dist = odoFim = odoInicio;
    float consumo = dist/litros;
    float custoCombustivel = litros * precoLitro;
    float lucro = recebido - custoCombustivel;

    printf("Consumo medio: %.2f Km/l\nLucro líquido: R$ %.2f\n", consumo, lucro);

    return 0;
}
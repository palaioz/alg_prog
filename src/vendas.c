/*
2) Considere que será concedido um bônus aos trabalhadores de
uma empresa, conforme a quantidade de vendas no mês, de acordo
com o quadro:

Vendas até R$900 Bonus = 5%
Vendas entre R$900 até R$1.400 Bonus = 8%
Vendas acima de R$1.400 Bonus = 10%

Desenvolva um algoritmo para ler o valor das vendas do trabalhador e
calcular o valor em reais do bônus. Exibir na tela: a quantidade de
vendas e o bônus (% e R$).

*/

#include <stdio.h>

int main(){
    float vendas, bonus;

    printf("Digite o valor das vendas (R$): ");
    scanf("%f", &vendas);

    if (vendas > 1400){
        bonus = 0.1;
    } else if (vendas > 900){
        bonus = 0.08;
    } else if (vendas >= 0){
        bonus = 0.05;
    } else {
        printf("Vendas nao podem ser negativas!");
        return 0;
    }

    float vendas_bonus = vendas * bonus;

    printf("Vendas: %.2f || Bonus: %.2f || Vendas com Bonus: %.2f", vendas, bonus, vendas_bonus);
    return 0;
}
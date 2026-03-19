// Uma revenda de carros paga a seus vendedores um salário fixo de X reais por mês, 
// acrescido de uma comissão de Y reais para cada carro vendido e 4% do valor 
// total de suas vendas. Escreva um algoritmo que leia o código do vendedor, seu 
// salário, o número de carros que ele vendeu no mês e o valor total de 
// suas vendas. O algoritmo deve mostrar o código do vendedor e o seu salário final.

#include <stdio.h>

int main(void){
    int codigo, num_carros;
    double salario_fixo, comissao_por_carro, total_vendas, salario_final;

    printf("Codigo do vendedor (inteiro): ");
    if (scanf("%d", &codigo) != 1) {
        return 1;
    }
    
    printf("\nSalario fixo (R$): ");
    if (scanf("%lf", &salario_fixo) != 1) {
        return 1;
    }

    printf("\nComissao por carro (R$): ");
    if (scanf("%lf", &comissao_por_carro) != 1) {
        return 1;
    }

    printf("\nNumero de carros vendidos: ");
    if (scanf("%d", &num_carros) != 1) {
        return 1;
    }
    
    printf("\nValor total das vendas (R$): ");
    if (scanf("%lf", &total_vendas) != 1) {
        return 1;
    }

    double comissao_total_por_carros = comissao_por_carro * num_carros;
    double comissao_percentual = 0.03 * total_vendas;

    salario_final = salario_fixo + comissao_total_por_carros + comissao_percentual;

    printf("\nCodigo do vendedor: %d\n", codigo);
    printf("\nSalario final: R$ %.2f\n", salario_final);

    return 0;
    
}
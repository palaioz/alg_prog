/*
Escreva um algoritmo que leia a matrícula, o valor da hora e o número de horas trabalhadas por um 
empregado. O algoritmo deve escrever a matrícula e o salário líquido do empregado, calculado 
conforme as seguintes regras:
    - o salário bruto mensal é o produto das horas trabalhadas pelo valor da hora;
    - sobre o salário bruto mensal é aplicado um desconto de 9% referente ao INSS;
    - sobre o salário bruto mensal é aplicado um desconto de 8% referente ao FGTS;
    - o salário líquido é o salário bruto mensal menos os encargos (descontos).
*/

#include <stdio.h>

int main(void) {
    int matricula;
    double valor_hora;
    double horas_trabalhadas;
    double salario_bruto, desconto_inss, desconto_fgts, salario_liquido;

    
    printf("Matricula (inteiro): ");
    if (scanf("%d", &matricula) != 1) return 1;

    printf("Valor da hora (R$): ");
    if (scanf("%lf", &valor_hora) != 1) return 1;

    printf("Numero de horas trabalhadas: ");
    if (scanf("%lf", &horas_trabalhadas) != 1) return 1;

    
    salario_bruto = valor_hora * horas_trabalhadas;

    
    desconto_inss = 0.09 * salario_bruto; 
    desconto_fgts = 0.08 * salario_bruto;

   
    salario_liquido = salario_bruto - (desconto_inss + desconto_fgts);

    
    printf("\nMatricula: %d\n", matricula);
    printf("Salario bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto INSS (9%%): R$ %.2f\n", desconto_inss);
    printf("Desconto FGTS (8%%): R$ %.2f\n", desconto_fgts);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
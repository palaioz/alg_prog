/*
1. A empresa XYZ decidiu dar um aumento a seus funcionários de acordo com a seguinte
regra:
     13% para os salários inferiores ou iguais a R$ 2000,00;
     11% para os salários situados entre R$ 2000,0 e R$ 4000,00 (inclusive);
     9 % para os salários entre R$ 4000,00 e R$ 8000,00 (inclusive); e
     7% para os demais salários.
Desenvolva um programa que receba o salário atual de um funcionário e forneça o valor do
seu novo salário. Mostre também o bônus (em reais e em %).

*/

#include <stdio.h>

int main(){

    float salario, percentual, aumento, novo_salario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    if (salario <= 2000){
        percentual = 0.13;
    } else if (salario > 2000 && salario <= 4000){
        percentual = 0.11;
    } else if (salario > 4000 && salario <= 8000){
        percentual = 0.09;
    } else {
        percentual = 0.07;
    }

    aumento = salario * percentual;
    novo_salario = salario + aumento;

    printf("\nNovo salario: R$%.2f", novo_salario);
    printf("\nBonus de: %.0f%%", percentual * 100);
    printf("\nAumento de: R$%.2f", aumento);

    return 0;
}
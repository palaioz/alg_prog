/*
    5. Considere a tabela de Alíquota de Imposto de Renda (IR) a seguir. Desenvolva um
    algoritmo para ler um valor de salário mensal, mostrar o % da alíquota do imposto de Renda e o
    valor em R$ da alíquota.
        Base de cálculo mensal em R$        Alíquota %
            Até 1.566,61                        -
          De 1.566,62 até 2.347,85             7,5
          De 2.347,86 até 3.130,51             15,0
          De 3.130,52 até 3.911,63             22,5
            Acima de 3.911,64                  27,5
*/

#include <stdio.h>

int main(){

    float salario, aliquota, valor_imposto;

    printf("\nDigite o salario mensal (R$): ");
    scanf("%f", &salario);

    // Verificação da alíquota
    if (salario < 1566.62){
        aliquota = 0.0;
    } else if (salario >= 1566.62 && salario < 2347.86){
        aliquota = 7.5;
    } else if (salario >= 2347.86 && salario < 3130.52){
        aliquota = 15.0;
    } else if (salario >= 3130.52 && salario < 3911.64){
        aliquota = 22.5;
    } else {
        aliquota = 27.5;
    }

    valor_imposto = salario * (aliquota / 100.0);

    printf("\n--- IMPOSTO DE RENDA ---\n");
    printf("Salario Mensal: R$%.2f\n", salario);

    if (aliquota == 0.0){
        printf("Aliquota (%%): Isento\n");
    } else {
        printf("Aliquota do IR: %.1f%%\n", aliquota);
    }

    printf("Valor do IR: %.2f\n", valor_imposto);

    return 0;
}
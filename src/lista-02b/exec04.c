/*
    4. Faça um programa leia o salário mensal de um funcionário e calcule o desconto do INSS,
    conforme as alíquotas da tabela:

    |            Salário                | Alíquota INSS |
    |        até R$ 965,6               |     8 %       | 
    |    de R$ 965,68 a R$ 1.609,45     |     9 %       |
    |    de R$ 1.609,46 até R$ 3.218,90 |     11 %      |

    O algoritmo deverá apresentar como resultado o salário mensal do funcionário, o percentual de
    desconto do INSS e o valor em Reais do desconto do INSS e o salário líquido (salário mensal
    menos o valor do INSS).
*/

#include <stdio.h>

int main(){

    float salario_bruto, aliquota, desconto_inss, salario_liquido;

    printf("\nDigite o salario mensal do funcionario (R$): ");
    scanf("%f", &salario_bruto);

    // Verificação da alíquota
    if (salario_bruto < 965.68){
        aliquota = 0.08;
        desconto_inss = salario_bruto * aliquota;
    } else if (salario_bruto >= 965.68 && salario_bruto < 1609.46) {
        aliquota = 0.09;
        desconto_inss = salario_bruto * aliquota;
    } else {
        aliquota = 0.11;

        // Aqui se segue a lógica para o teto da alíquota
        if (salario_bruto <= 3218.90){
            desconto_inss = salario_bruto * aliquota;
        }
        else {
            desconto_inss = 3218.90 * aliquota;
        }
    }

    salario_liquido = salario_bruto - desconto_inss;

    printf("\n--- EXTRATO DO PAGAMENTO ---\n");
    printf("Salario Bruto: R$%.2f\n", salario_bruto);
    printf("Aliquota do INSS: %.0f%%\n", aliquota * 100);
    printf("Desconto do INSS: %.2f\n", desconto_inss);
    printf("Salario Liquido: R$%.2f\n\n", salario_liquido);

    return 0;
}
// ------------- EXERCÍCIO 10 --------------------
// Uma loja vende bicicletas com um acréscimo de 50% sobre o preço de custo. Ela paga a cada vendedor 
// 2 salários mínimos mensais, mais uma comissão de 15% sobre o preço de custo de cada bicicleta 
// vendida, dividida igualmente entre eles. Desenvolva um algoritmo que leia o número de empregados da 
// loja, o valor do salário mínimo, o preço de custo de cada bicicleta e o número de bicicletas vendidas, 
// calcule e mostre: o salário que cada empregado receberá e o lucro líquido da loja.

#include <stdio.h>

int main(){

    int empregados, numVenda;
    float salarioMinimo, valorCusto; 

    printf("Digite o numero de empregados: ");
    scanf("%d", &empregados);
    printf("\nDigite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);
    printf("\nDigite o custo de uma bicicleta: ");
    scanf("%f", &valorCusto);
    printf("\nQuantas bicicletas foram vendidas? ");
    scanf("%d", &numVenda);

    float valorVenda = valorCusto + (valorCusto * 0.5);
    float lucroBruto = valorVenda * numVenda;
    
    float comissao = (valorCusto * 0.15 * numVenda) / empregados;
    float salarioEmpreg = (salarioMinimo * 2) + comissao;
    
    float despesas = salarioEmpreg + (valorCusto * numVenda);
    float lucroLiquido = lucroBruto - despesas;

    printf("\nLucro bruto: R$%.2f. \nLucro liquido: R$%.2f. \nCada funcionario recebera R$%.2f, com a comissao de R$%.2f.", lucroBruto, lucroLiquido, salarioEmpreg, comissao);

    return 0;
}
// ------------- EXERCÍCIO 9 --------------------
// Fazer um algoritmo para ler a quantidade vendida 
// e o valor unitário (R$) de um produto. Calcular e
// mostrar o valor total da venda e o valor do ICMS (18%) sobre a venda. 

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int quant;
    float icms, valorUnit, totalVenda;

    printf("Digite a quantidade de unidades e seu valor unitario: ");
    scanf("%d %f", &quant, &valorUnit);

    totalVenda = quant * valorUnit;
    icms = totalVenda * 0.18;

    printf("\nTotal da venda: R$%.2f. Valor do ICMS: R$%.2f", totalVenda, icms);

    return 0;
}
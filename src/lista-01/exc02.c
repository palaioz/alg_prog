// ------------- EXERCÍCIO 2 --------------------
// Escreva um algoritmo para ler o salário mensal 
// e o percentual de reajuste. O algoritmo deve 
// calcular o novo salário e exibi-lo.

#include <stdio.h>

int main(){

    float salario, percentual, novoSalario;
    
    printf("Salario mensal e percentual de reajuste: ");
    scanf("%f %f", &salario, &percentual);

    novoSalario = salario + (salario * percentual / 100);

    printf("\nO novo salario sera R$ %.2f", novoSalario);

    return 0;
}
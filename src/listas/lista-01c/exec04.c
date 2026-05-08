/*
Considere a cotação do dia do Dólar Americano em relação ao Real Brasileiro:
    US$ 1,00 = R$ 4,98
Desenvolva um algoritmo que leia um valor em Reais, informado pelo usuário, calcule e mostre o valor 
equivalente em Dólares, conforme a cotação informada na questão.
*/

#include <stdio.h>

// -------- Funções para conversão -------- //
float BRL2USD(float valorReal, float cotacaoDolarReal){ 
    return valorReal / cotacaoDolarReal;
}

float USD2BRL(float valorDolar, float cotacaoDolarReal){
    return valorDolar * cotacaoDolarReal;
}

// -------- Função principal -------- //
int main(void){

    int opcao;
    float cotacao = 4.98;
    float real, dolar;

    printf("=========================\n");
    printf("Conversor Real (R$) e Dolar (US$)\n");
    printf("=========================\n");

    while (1){
        printf("\nEscolha uma operacao: \n");
        printf("1. BRL -> USD\n");
        printf("2. USD -> BRL\n");
        printf("0. Sair\n");
        scanf("%d", &opcao);

        if (opcao == 1){
            printf("\nDigite o valor em reais: ");
            scanf("%f", &real);
        
            dolar = BRL2USD(real, cotacao);
        
            printf("\nR$%.2f equivalem a US$%.2f", real, dolar);

        } else if (opcao == 2){
            printf("\nDigite o valor em dolares: ");
            scanf("%f", &dolar);

            real = USD2BRL(dolar, cotacao);

            printf("\n$%.2f dolares equivalem a R$%.2f.", dolar, real);

        } else if (opcao == 0){
            printf("Saindo do programa...");
            break;

        } else {
            printf("Digite uma das opcoes acima!\n");
        }
    }
}
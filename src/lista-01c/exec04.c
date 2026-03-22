/*
Considere a cotação do dia do Dólar Americano em relação ao Real Brasileiro:
    US$ 1,00 = R$ 4,98
Desenvolva um algoritmo que leia um valor em Reais, informado pelo usuário, calcule e mostre o valor 
equivalente em Dólares, conforme a cotação informada na questão.
*/

#include <stdio.h>

float BRL2USD(float valorReal, float cotacaoDolarReal){return valorReal / cotacaoDolarReal;}
float USD2BRL(float valorDolar, float cotacaoDolarReal){return valorDolar * cotacaoDolarReal;}

int main(void){
    
    float cotacao = 4.98;
    float real, dolar;

    printf("=========================\n");
    printf("Conversor Real (R$) -> Dolar (US$)\n");
    printf("=========================\n");

    printf("Valor em reais: ");
    scanf("%f", &real);

    dolar = BRL2USD(real, cotacao);

    printf("R$%.2f equivalem a US$%.2f", real, dolar);

    return 0;
}
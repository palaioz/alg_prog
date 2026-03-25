/*
Ler um valor inteiro que indica um período de tempo em dias. 
O programa deve decompor este valor em dias, meses e anos. 
Para simplificar, considere que todos os meses tem 30 dias e todos os anos tem 365 dias.
*/

#include <stdio.h>

int main(void){

    int total_dias;
    int dias, meses, anos;

    while (1){
        printf("Digite a quantidade de dias (-1 para sair): ");
        scanf("%d", &total_dias);

        if (total_dias < -1){
            printf("Digite um numero positivo!\n");
            return 1;
        }

        if (total_dias == -1){
            break;
        }

        anos = total_dias / 365; // retorna 0 para todo dia < 365;
        dias = total_dias % 365; // retornará o resto da divisão total_dias / 365;

        // aqui ocorre o mesmo processo, porém para os meses, considerando meses: 30 dias;
        meses = dias /30;
        dias = dias % 30;

        printf("\nDias: %d \nMeses: %d \nAnos: %d\n\n", dias, meses, anos);

    }

    return 0;
}
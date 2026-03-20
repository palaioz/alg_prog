/*
Ler um valor inteiro que indica um período de tempo em dias. O programa deve decompor este valor em dias, meses e anos. Para simplificar, considere que todos os meses tem 30 dias e todos os anos tem 365 dias.
*/

#include <stdio.h>

int main(void){

    int dias, meses = 0, anos = 0;

    printf("Digite a quantidade de dias: ");
    scanf("%d", &dias);

    while(dias >= 30){
        meses++;
        if (meses == 12){
            anos++;
            meses = 0;
        }
        dias -= 30;
    }


    printf("\nDias: %d \nMeses: %d \nAnos: %d", dias, meses, anos);

    return 0;
}
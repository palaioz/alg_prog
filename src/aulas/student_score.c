/*
2) Um sistema de avaliação acadêmico oferece estrelas aos seus estudantes, conforme a seguinte classificação:

Média final a partir de 9,5 até 10:  *****
Média final a partir de 8,5 até menor que 9:  ****
Média final a partir de 7,5 até menor que 8,5:  ***
Média final a partir  de 6,5 até menor que 7,5:  **
Média final a partir  de 6,0 até menor que 6,5:  *
Média final menor que 6,0: nenhuma estrela.
*/

#include <stdio.h>

int main(void){

    float media;

    printf("Informe a media: ");
    scanf("%f", &media);

    if (media > 9.5){
        if (media <=10){
            printf("* * * * *");
        } else {
            printf("A media deve ser <= 10");
        }
    } else if (media >= 8.5){
        printf("* * * *");
    } else if (media >= 7.5){
        printf("* * *");
    } else if (media >= 6.5){
        printf("* *");
    } else if (media >= 6){
        printf("*");
    } else if (media >=0 ){
        printf("0 estrelas");
    } else {
        printf("A media deve ser maior que 0");
    }

    return 0;
}
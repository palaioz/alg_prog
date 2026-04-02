#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int guessNumber(){

    int magic, adv;
    
    srand(time(NULL));
    magic = rand() % 100;
    
    printf("Qual numero estou pensando (%f)?\n", magic);
    scanf("%f", &adv);
    
    if (adv == magic){
        printf("sao iguais");
    } else {
        printf("nao sao iguais");
    }

    return 0;
}

int maxValue(){

    float a, b;

    printf("\nDigite dois numeros: ");
    scanf("%f %f", &a, &b);

    if (a == b){
        printf("%.2f e %.2f sao iguais", a, b);
    } else if (a > b){
        printf("valor %.2f maior que %.2f", a, b);
    } else {
        printf("%.2f e maior que %.2f", b, a);
    }

    return 0;
}

int main(){

    while (1){
        // guessNumber();
        // printf("\n\n");
        maxValue();
    }
    return 0;
}
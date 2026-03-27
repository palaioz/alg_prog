#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int guessNumber(){

    int magic, adv;
    
    srand(time(NULL));
    magic = rand() % 100;
    
    printf("Qual numero estou pensando (%d)?\n", magic);
    scanf("%d", &adv);
    
    if (adv == magic){
        printf("sao iguais");
    } else {
        printf("nao sao iguais");
    }

    return 0;
}

int maxValue(){

    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if (a == b){
        printf("%d e %d sao iguais", a, b);
    } else if (a > b){
        printf("valor %d maior que %d", a, b);
    } else {
        printf("%d e maior que %d", b, a);
    }

    return 0;
}

int main(){

    // guessNumber();
    // printf("\n\n");
    maxValue();

    return 0;
}
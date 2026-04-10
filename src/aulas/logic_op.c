#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if  (idade < 16){
        printf("Voce nao pode votar");
    } else if (idade >= 16 && idade < 18 || idade >= 70){
        printf("Voce e autorizado a votar");
    } else {
        printf("Voce e obrigado a votar");
    }
    return 0;
}
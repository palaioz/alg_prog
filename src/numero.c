#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int n;

    while (1){
        printf("Insira um numero: ");
        scanf("%d", &n);

        if (n % 2 == 0){printf("Numero par\n");} 
            else { printf("Numero ímpar\n");}

    }

    return 0;
}
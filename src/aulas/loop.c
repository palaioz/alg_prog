#include <stdio.h>

int main(){
    int n, a;

    // printf("Digite um numero maior que zero: ");
    // scanf("%d", &n);

    // if (n > 0){
    //     // for (a = 1; a <= n; a++){
    //     //     printf("%d\t", a);
    //     // }

    //     // for (a = n; a >= 1; a++){
    //     //     printf("%d\t", a);
    //     // }

    //     printf("T-MINUS:\n");
    //     for (a = n; a >= 1; a--){
    //         printf("T-%d\n", a);
    //     }

    // } else{
    //     printf("O numero deve ser maior que zero!");
    // }

    // for (a = 1; a <= 10; a++){
    //     printf("Digite um numero: ");
    //     scanf("%d", &n);

    //     if (n % 2 == 0){
    //         printf("Par\n");
    //     } else {
    //         printf("Impar\n");
    //     }
    // }

    int q, Termo;

    for (n = 5; n > 0; n--){
        a = n;
        n = 3;
        Termo = 1;
        while(Termo <= 9 * a){
            printf("%d\n", Termo);
            Termo = Termo * q;
        }
    }

    return 0;
}
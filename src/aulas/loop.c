#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // ---------------------------------------Contar de 1 aé o n
    // int n, a;
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

    // ------------------------ Número par ou ímpar
    // for (a = 1; a <= 10; a++){
    //     printf("Digite um numero: ");
    //     scanf("%d", &n);

    //     if (n % 2 == 0){
    //         printf("Par\n");
    //     } else {
    //         printf("Impar\n");
    //     }
    // }

    // ---------------------------- Contagem regressiva
    // int q, Termo;

    // for (n = 5; n > 0; n--){
    //     a = n;
    //     n = 3;
    //     Termo = 1;
    //     while(Termo <= 9 * a){
    //         printf("%d\n", Termo);
    //         Termo = Termo * q;
    //     }
    // }

   // -----------Ler as notas de uma turma enquanto forem maiores do que zero
    float nota, media;
    float lista_notas[8] = {0.0};
    int contar = 0;

    // Input nota
    while(nota > 0.0){
        printf("Digite a nota: ");
        scanf("%f", &nota);

        lista_notas[contar] = nota;
        contar += 1;
    }

    system("pause");
    printf("Press Enter to continue...");
    getchar();

    system("cls");

    for(int i = 0; i < contar + 1; i++){
        if (lista_notas[i] == 0){
            break;
        }

        media += lista_notas[i];
        printf("\n%.2f", lista_notas[i]);
        if (lista_notas[i] >= 6.0){
            printf(" - Aprovado");
        } else {
            printf(" - Reprovado");
        }
    }

    // media = media / sizeof(lista_notas);
    // printf("\n\n%.2f", media);
    float size = sizeof(lista_notas);
    printf("\n%.2f", size);

    return 0;
}
/*
Conjuntos Homogênios:
- Vetores
- Matrizes
- Strings
*/

#include <stdio.h>

int main(){

    // ------ ITERAÇÃO ------
    // int a[5] = {1, 2, 3, 4, 5}, i;

    // for(i = 0; i < 5; i++){
    //     printf("%d. Original: %d\n", i, a[i]);
    //     a[i] = 100 * a[i];
    //     printf("  -> Modificado: %d\n\n", a[i]);
    // }

    // ------ VETORES ------
    // int vet[10], n, i, flag = 1;

    // printf("Informe os 10 numeros do vetor: ");
    // for(i = 0; i < 10; i++){
    //     scanf("%d", &vet[i]);
    // }

    // printf("Digite um numero a ser procurado: ");
    // scanf("%d", &n);
    
    // for(i = 0; i < 10; i++){
    //     if (vet[i] == n){
    //         flag = 0;
    //     }
    // }

    // if (flag) printf("O numero fornecido nao existe no vetor.");
    // else printf("O numero %d existe no vetor.", n);

    // ------ MATRIZES ------
    int i, j, n;
    int A[3][4];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("Digite o elemento A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // printf("\n\n");

    // for(i = 0; i < 3; i++){
    //     for(j = 0; j < 4; j++){
    //         printf("A[%d][%d] == %d\n", i, j, A[i][j]);
    //     }
    //     printf("\n");
    // }

    printf("Digite um numero para multiplicar pela matriz: ");
    scanf("%d", &n);

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            A[i][j] = A[i][j] * n;
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
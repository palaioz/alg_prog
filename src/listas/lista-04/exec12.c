/*
Escreva um algoritmo que leia 2 vetores X(10) e Y(10) e os escreva. Crie, a seguir, um
vetor para cada uma das operações:
 • A união de X com Y
 • A diferença entre X e Y
 • A interseção entre X e Y
Escreva os vetores resultado de cada operação.

*/

#include <stdio.h>

int main() {
    int X[10], Y[10];
    int uniao[20], diferenca[10], intersecao[10];
    int tam_u = 0, tam_d = 0, tam_i = 0;
    int existe;

    printf("Digite 10 numeros inteiros para o vetor X:\n");
    for (int i = 0; i < 10; i++) {
        printf("X[%d]: ", i);
        scanf("%d", &X[i]);
    }

    printf("\nDigite 10 numeros inteiros para o vetor Y:\n");
    for (int i = 0; i < 10; i++) {
        printf("Y[%d]: ", i);
        scanf("%d", &Y[i]);
    }

    printf("\nVetor X original: ");
    for (int i = 0; i < 10; i++) printf("%d ", X[i]);
    
    printf("\nVetor Y original: ");
    for (int i = 0; i < 10; i++) printf("%d ", Y[i]);
    printf("\n\n=========================================\n");

    for (int i = 0; i < 10; i++) {
        existe = 0;
        for (int k = 0; k < tam_u; k++) {
            if (uniao[k] == X[i]) {
                existe = 1;
                break;
            }
        }
        if (!existe) {
            uniao[tam_u] = X[i];
            tam_u++;
        }
    }

	for (int i = 0; i < 10; i++) {
        existe = 0;
        for (int k = 0; k < tam_u; k++) {
            if (uniao[k] == Y[i]) {
                existe = 1;
                break;
            }
        }
        if (!existe) {
            uniao[tam_u] = Y[i];
            tam_u++;
        }
    }

    for (int i = 0; i < 10; i++) {
        int no_Y = 0;
        for (int j = 0; j < 10; j++) {
            if (X[i] == Y[j]) {
                no_Y = 1;
                break;
            }
        }
        if (!no_Y) {
            existe = 0;
            for (int k = 0; k < tam_d; k++) {
                if (diferenca[k] == X[i]) {
                    existe = 1;
                    break;
                }
            }
            if (!existe) {
                diferenca[tam_d] = X[i];
                tam_d++;
            }
        }
    }

    
    for (int i = 0; i < 10; i++) {
        int no_Y = 0;
        
        for (int j = 0; j < 10; j++) {
            if (X[i] == Y[j]) {
                no_Y = 1;
                break;
            }
        }
        
        if (no_Y) {
            existe = 0;
            for (int k = 0; k < tam_i; k++) {
                if (intersecao[k] == X[i]) {
                    existe = 1;
                    break;
                }
            }
            if (!existe) {
                intersecao[tam_i] = X[i];
                tam_i++;
            }
        }
    }

    printf("Vetor UNIAO: ");
    for (int i = 0; i < tam_u; i++) printf("%d ", uniao[i]);
    printf("\n");

    printf("Vetor DIFERENCA (X - Y): ");
    if (tam_d == 0) printf("[Vazio]");
    for (int i = 0; i < tam_d; i++) printf("%d ", diferenca[i]);
    printf("\n");

    printf("Vetor INTERSECAO: ");
    if (tam_i == 0) printf("[Vazio]");
    for (int i = 0; i < tam_i; i++) printf("%d ", intersecao[i]);
    printf("\n");

    return 0;
}
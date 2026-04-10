#include <stdio.h>

int main() {
    FILE *fptr;

    for (int i = 1; i <= 6; i++) {
        char filename[150];

        printf("\nSalvando outro arquivo...\n");

        snprintf(filename, sizeof(filename),
                 "C:/Users/laboratorio/alg_prog/alg_prog/src/lista-02b/exec0%d.c", i);

        printf("%s\n", filename);

        fptr = fopen(filename, "w");

        if (fptr == NULL) {
            printf("Erro ao criar o arquivo!\n");
            continue;
        }

        printf("Arquivo %s foi salvo!\n", filename);

        fclose(fptr);
    }

    return 0;
}
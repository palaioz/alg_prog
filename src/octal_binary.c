#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>


// Função para validar se a string é um número octal válido
int validarOctal(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i]) || str[i] > '7') {
            return 0; // Contém dígito inválido
        }
    }
    return 1;
}

// Função para converter um dígito octal para binário (3 bits)
void octalParaBinario(char octal) {
    switch (octal) {
        case '0': printf("000"); break;
        case '1': printf("001"); break;
        case '2': printf("010"); break;
        case '3': printf("011"); break;
        case '4': printf("100"); break;
        case '5': printf("101"); break;
        case '6': printf("110"); break;
        case '7': printf("111"); break;
    }
}

int main() {
    setlocale(LC_ALL, "");

    char octal[100];

    printf("Digite um numero octal: ");
    if (scanf("%99s", octal) != 1) {
        printf("Erro na leitura da entrada.\n");
        return 1;
    }

    // Validação
    if (!validarOctal(octal)) {
        printf("Entrada invalida. Digite apenas digitos de 0 a 7.\n");
        return 1;
    }

    printf("Binario: ");
    for (int i = 0; i < strlen(octal); i++) {
        // Evita zeros à esquerda no primeiro dígito
        if (i == 0) {
            switch (octal[i]) {
                case '0': printf("0"); break;
                case '1': printf("1"); break;
                case '2': printf("10"); break;
                case '3': printf("11"); break;
                case '4': printf("100"); break;
                case '5': printf("101"); break;
                case '6': printf("110"); break;
                case '7': printf("111"); break;
            }
        } else {
            octalParaBinario(octal[i]);
        }
    }
    printf("\n");

    return 0;
}
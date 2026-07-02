/*
    13. Ler uma string e um número inteiro, que representa o número de caracteres. Eliminar n caracteres do início
    da string e apresentar a string resultante.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char word[50];
    int rmv;

    printf("Digite uma palavra: ");
    scanf("%s", word);

    int tam = strlen(word);

    printf("\nTamanho da string: %d", tam);
    printf("\nQuantos caracteres deseja remover do inicio? ");
    scanf("%d", &rmv);

    if (rmv < 0)
    {
        rmv = (-rmv) % tam;
    }

    char *cut_word = word + rmv;

    printf("\nOriginal: %s", word);
    printf("\nAlterada: %s", cut_word);

    return 0;
}
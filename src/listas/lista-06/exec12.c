/*
    12. Escrever um programa em C para ler uma string e um número n, e eliminar n caracteres do final da string.
    A string resultante deve ser mostrada na tela. Por exemplo, lida a string “Agora” e o número 3, deve 
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
    printf("\nQuantos caracteres deseja remover do final? ");
    scanf("%d", &rmv);

    if (rmv < 0)
    {
        rmv = (-rmv) % tam;
    }

    char *cut_word = word - rmv;

    printf("\nOriginal: %s", word);
    printf("\nAlterada: %s", cut_word);

    return 0;
}
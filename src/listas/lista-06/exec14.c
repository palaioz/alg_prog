/*
    14. Ler uma string qualquer e substituir todas as consoantes por ‘*’. Apresentar a nova string como resultado.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char word[50];

    printf("Digite uma palavra: ");
    scanf("%s", word);

    for(int i = 0; i < strlen(word); i++)
    {
        if(word[i] == '\0'){
            continue;
        }

        if(word[i] != 'A' || word[i] != 'E' || word[i] != 'I' || word[i] != 'O' ||word[i] != 'U' || word[i] != 'a' || word[i] != 'e' || word[i] != 'i' || word[i] != 'o' || word[i] != 'u')
        {
            word[i] = '*';
        }

    }

    puts(word);

    return 0;
}
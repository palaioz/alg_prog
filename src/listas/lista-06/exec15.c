/*
    15. Criar uma string com todas as letras do alfabeto.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[26];
    int letra = 65;

    for(int i = 0; i < 25; i++)
    {
        str[i] = letra;
        letra += 1;
    }

    printf("%s\n", str);

    return 0;
}
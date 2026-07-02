#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

int main(){
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[150];
    int tam = 0;
    int vogais = 0;

    printf("\nDigite seu nome: ");
    // scanf("%s", &nome);
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("\nSeu nome é %s", nome);
    printf("\n");
    puts(nome);

    printf("\nA primeira letra é: %c\n", nome[0]);

    for(int i = 0; nome[i] != '\0'; i++)
    {
        if(nome[i] != '\0')
        {
            tam++;
        }
        
        if(nome[i] == 'A' || nome[i] == 'E' || nome[i] == 'I' || nome[i] == 'O' || nome[i] == 'U' || nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u')
        {
            vogais++;
            nome[i] = '*';
        }

        printf("%c\n", nome[i]);
    }


    printf("Seu nome tem %d caracteres, e %d vogais.", tam, vogais);

    return 0;
}
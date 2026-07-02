#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

int main(){
	SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");
	
	char word[50], newWord[50], letra;
	int i, j = 0, tam;

	printf("Palavra: ");
	scanf("%s", word);

	tam = strlen(word);

    // TAMANHO DE STRING
	printf("\nTem %d caracteres.", tam);
	
    // STRING INVERTIDA
    printf("\nAo contrário: ");

    for(i = tam; i >= 0; i--)
    {
        printf("%c", word[i]);
    }

    printf("\n");

    // COPIANDO STRING
    for(i = tam - 1; i >= 0; i--)
    {
        newWord[j] = word[i];
        j++;
    }
    newWord[j] = '\0';

    printf("Nova string: %s\n", newWord);
    
    // COMPARANDO DUAS STRINGS
    int cmp = strcmp(word, newWord);

    if(cmp == 0){
        printf("São palíndromos");
    } else {
        printf("Não são palíndromos");
    }


	return 0;
}
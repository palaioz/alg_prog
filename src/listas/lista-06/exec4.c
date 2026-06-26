/*
	Escrever a palavra na ordem inversa
*/

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

int main(){
	SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");
	
	char word[50];
	int tam;

	printf("Palavra: ");
	scanf("%s", word);

	tam = strlen(word);

	printf("\nTem %d caracteres.\n", tam);
	printf("Ao contrário: ");

	for(int i = tam - 1; i >= 0; i--)
	{
		printf("%c", word[i]);
	}
	
	return 0;
}
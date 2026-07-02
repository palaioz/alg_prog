/*
	10. Escrever um programa em C para ler uma string e copiar para dentro de uma outra string todas as vogais.
	Exibir na tela a string formada pelas letras copiadas.
*/

#include <stdio.h>
#include <string.h>

int main(){
	char word[50], wordVowels[50];
	int j = 0; 

	printf("Digite uma palavra: ");
	scanf("%s", word);

	for(int i = 0; i < strlen(word) - 1; i++)
	{
		if(word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U' || word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
		{
			wordVowels[j] = word[i];
			j++;
		}
	}

	printf("\nOriginal: %s", word);
	printf("\nVogais: %s", wordVowels);
	
	return 0;
}
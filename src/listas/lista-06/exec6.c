/*
6. Ler uma palavra e substituir todas as vogais por #. Mostar a palavra modificada
*/

#include <stdio.h>
#include <string.h>

int main(){
	char word[50];

	printf("Digite uma palavra: ");
	scanf("%s", word);
	
	printf("\nOriginal: %s", word);
	
	for(int i = 0; i < strlen(word); i++)
	{
		if(word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U' || word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
		{
			word[i] = '#';
		}
	}

	printf("\nModificada: %s", word);

	return 0;
}
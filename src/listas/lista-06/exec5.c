/*
5. Ler uma palavra e uma letra qualquer. Mostrar a palavra cortada na primeira posição em que encontrar a
letra informada.
*/

#include <stdio.h>
#include <string.h>

int main(){
	char word[50], letra[2];

	printf("Digite uma palavra: ");
	fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';
	printf("Digite uma letra: ");
	scanf("%c", letra);

	printf("Palavra original: %s", word);

	for (int i = 0; word[i] == letra; i++)
	{
		if (word[i] == letra)
		{
			word[i] = word[i + 1];
		}
	}

	printf("Palavra modificada: %s", word);

	return 0;
}
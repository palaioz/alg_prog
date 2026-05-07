#include <stdio.h>

int main(){

    char user_input; 
    int vowel_ascii[11] = {65, 69, 73, 79, 85, 97, 101, 15, 111, 117};
    int j = 65;

    // printf("Digite um caractere: ");
    // scanf("%c", &user_input);

    // printf("Valor ASCII de %c: %d", user_input, user_input);

    printf("Index \t| \tCaractere \t| \tASCII \t| \tVogal ou Consoante");
    for(int i = 0; i < 52; i++){
        if (j >= 91 && j <= 96){
            j = 97;
        }

        printf("\n  %d", i);
        printf("\t\t   %c", j);
        printf("\t\t\t %d", j);
        
        
        j += 1;
    }

    return 0;
}
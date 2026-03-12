// ------------- EXERCÍCIO 4 --------------------
// Calcule a média final de um aluno, considerando 
// que existem duas avaliações no semestre.

#include <stdio.h>

int main(){

    float n1, n2, media;

    printf("Digite as duas notas: ");
    scanf("%f %f", &n1, &n2);

    media = (n1 + n2) / 2;

    prinf("\nMedia final: %.2f", media);

    return 0;
}
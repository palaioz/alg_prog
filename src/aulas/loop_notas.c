#include <stdio.h>
#include <stdlib.h>

int main(){

    // -------- VARIÁVEIS ------
    int total_estudantes;
    float soma_notas = 0.0, media = 0.0;

    printf("Digite a quantidade de estudantes: ");
    scanf("%d", &total_estudantes);

    // Array com o tamanho fornecido pelo usuário -> Variable Lengh Array (VLA)
    float lista_notas[total_estudantes];


    // ------ ENTRADA USUÁRIO ------
    for(int i = 0; i < total_estudantes; i++){
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &lista_notas[i]);
    }


    // ------ LIMPAR TERMINAL ------
    system("pause");
    printf("Lista de notas completa. Pressione Enter para continuar...");
    getchar();

    system("cls || clear"); // (Windows || Linux)


    // ------ EXIBIR NOTAS E APROVAÇÃO ------
    printf("====== [ RELATORIO DE NOTAS ] ======\n\n");

    for(int i = 0; i < total_estudantes; i++){
        soma_notas += lista_notas[i];
        
        printf("Aluno %d: %.2f - %s\n", i + 1, lista_notas[i], (lista_notas[i] >= 6.0) ? "Aprovado": "Reprovado");
    }


    // ------ MÉDIA DA TURMA ------
    media = soma_notas / total_estudantes;

    printf("---------------\n");
    printf("Media da turma: %.2f\n", media);
    
    return 0;
}
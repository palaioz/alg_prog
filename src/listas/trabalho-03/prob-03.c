/*
A Cifra de César é uma das técnicas de criptografia de dados mais simples. É conhecida também como 
Cógido de César ou Troca de César. É um tipo de cifra por substituição, em que cada caracter 
é substituido por outro caracter.

Essa Cifra consiste em receber uma mensagem (string) e modificá-la de forma que cada caracter 
é substituído por outro caracter que se apresenta no alfabeto abaixo dela um número fixo de 
vezes. Esse número fixo de vezes, é chamado de número de troca ou deslocamento à direita ou 
chave de criptografia. 

Por exemplo, se a mensagem recebida for ABACO e a número de troca for igual a 3, a mensagem 
será codificada para: DEDFR, ou seja, o A foi substituído por D, e os demais caracteres 
foram substituídos pelo caracter 3 posições à sua frente. 

Desenvolva um programa na linguagem C para ler uma mensagem (string) de no máximo 
100 caracteres e ler o número de troca. Posteriormente, o programa deve codificar a mensagem 
conforme a Cifra de César e exibi-la ao usuário. 
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char mensagem[101];
    int chave, i;

    // LEITURA DA MENSAGEM
    printf("Digite a mensagem a ser criptografaca (max 100 caracteres): ");
    fgets(mensagem, sizeof(mensagem), stdin);

    // REMOVENDO '\n' CASO EXISTA
    mensagem[strcspn(mensagem, "\n")] = '\0';

    // LEITURA DA CHAVE
    printf("Digite o numero de troca (chave): ");
    scanf("%d", &chave);

    // CHAVES NEGATIVAS
    if (chave < 0) {
        chave = chave * -1;
    }

    // AJUSTANDO CHAVE PARA LIMITE DE 26
    chave = chave % 26;

    // CIFRA DE CÉSAR
    for(i = 0; mensagem[i] != '\0'; i++)
    {
        // Verifica se é letra maiúscula
        if(isupper(mensagem[i]))
        {
            mensagem[i] = (mensagem[i] - 'A' + chave) % 26 + 'A';
        }
        // Verifica se é letra minúscula
        else if(islower(mensagem[i])) 
        {
            mensagem[i] = (mensagem[i] - 'a' + chave) % 26 + 'a';
        }
        // Espaços e pontuações permanecem inalterados
    }

    printf("\nMensagem criptografada: %s\n", mensagem);

    return 0;
}
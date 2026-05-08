// ------------- EXERCÍCIO 7 --------------------
// Faça um programa que leia 3 valores em variáveis distintas, 
// armazene a soma das duas primeiras em uma nova variável 
// e o produto das duas últimas em outra. Mostre como resultado 
// o produto das duas novas variáveis.

#include <stdio.h>

int main(){

    float v1, v2, v3, soma, produto, resultado;
    
    printf("Digite 3 valores ");
    scanf("%f, %f, %f", &v1, &v2, &v3);

    soma = v1 + v2;
    produto = v2 * v3;
    resultado = soma * produto;
    
    printf("Resultado final: %.2f\n", resultado);

    return 0;
}
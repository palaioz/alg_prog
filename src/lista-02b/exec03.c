/*
    3. Escreva um algoritmo que lê três valores para os lados de um triângulo (cada lado do
    triângulo deve ser menor que a soma dos outros dois lados). O programa deve verificar se os lados
    fornecidos formam realmente um triângulo, e caso esta condição seja verdadeira, se o triângulo é
    equilátero (todos lados iguais), isósceles (dois lados iguais) ou escaleno (todos lados diferentes)
*/

#include <stdio.h>

int main(){

    float a, b, c;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    // Verificar condição de existência (cada lado menor que a soma dos outros dois)
    if (a < b + c && b < a + c && c < a + b){

        printf("\nOs lados formam um triangulo ");

        //Verificar o tipo de triângulo
        if (a == b && b == c){
            printf("EQUILATERO\n");
        } 
        else if (a == b || b == c || a == c){
            printf("ISOCELES\n");
        }
        else {
            printf("ESCALENO\n");
        }

    } else {
        printf("\nOs valores informados NAO podem formar um triangulo.\n");
    }

    return 0;
}
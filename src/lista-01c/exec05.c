/*
Júlia ao procurar seu gatinho, o avistou em cima da árvore. Ela pediu ajuda a seu pai, que colocou uma
escada junto à árvore para ajudar o gato a descer. Sabendo que a altura que o gato está do chão é o valor
a (em metros) e que a escada estava posicionada a b metros da árvore, calcule o comprimento da escada
que o gato deverá descer, considerando que este equivale à hipotenusa c.

Desenvolva um algoritmo para ler os valores de a e b e calcular o comprimento da escada, usando o 
Teorema de Pitágoras: 
c2 = a2 + b2
*/

#include <stdio.h>
#include <math.h>

int main (void){
    float a, b, c;

    printf("Digite os valores de A e B (em metros): ");
    scanf("%f %f", &a, &b);

    c = sqrt(a * a + b * b);

    printf("Valor de C: %.2f", c);

    return 0;
}
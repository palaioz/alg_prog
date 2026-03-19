// ------------- EXERCÍCIO 12 --------------------
// Encontre as raízes de uma equação de 2º grau ax2 + bx + c. 
// O algoritmo deverá ler os coeficientes a, b e c e calcular as raízes 
// utilizando a fórmula de Báskara.

#include <stdio.h>
#include <math.h>

int main(){

    while(1){
        
        float a, b, c;
        float x1, x2, delta;

        printf("\nDigite os coeficientes a, b e c: ");
        scanf("%f %f %f", &a, &b, &c);
        
        delta = b * b - 4 * a * c;

        if (delta < 0){
            float parteReal = -b / (2 * a);
            float parteImg = sqrt(-delta) / (2 * a);
            printf("\nx1 = %.2f + %.2fi", parteReal, parteImg);
        } else{
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("\nx1 = %.2f \nx2 = %.2f", x1, x2);
        }
        


    }
    return 0;
}
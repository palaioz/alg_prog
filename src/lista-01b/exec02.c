//  sqrt(x * y) + (x * y)/(2 * x) + 3² + x²/4

/* Exercicio2.c
   Lê x e y e calcula a expressão:
   R = sqrt(x * y) + (x * y) / (2 * x) + 3^2 + x^2 / 4
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double x, y, R;

    
    printf("Digite o valor de x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Entrada invalida para x.\n");
        return 1;
    }
    printf("Digite o valor de y: ");
    if (scanf("%lf", &y) != 1) {
        printf("Entrada invalida para y.\n");
        return 1;
    }

    
    if (x * y < 0.0) {
        printf("Erro: produto x*y negativo; raiz quadrada invalida.\n");
        return 1;
    }
    if (x == 0.0) {
        printf("Erro: x = 0 causa divisao por zero em (x*y)/(2*x).\n");
        return 1;
    }

    
    double termo_raiz = sqrt(x * y);               
    double termo_frac = (x * y) / (2.0 * x);      
    double termo_tres_ao_quadrado = 3.0 * 3.0;     
    double termo_x_quadrado_sobre_4 = (x * x) / 4.0; 

   
    R = termo_raiz + termo_frac + termo_tres_ao_quadrado + termo_x_quadrado_sobre_4;

    
    printf("Termos: raiz=%.6f, frac=%.6f, 3^2=%.2f, x^2/4=%.6f\n",
           termo_raiz, termo_frac, termo_tres_ao_quadrado, termo_x_quadrado_sobre_4);
    printf("Resultado R = %.6f\n", R);

    return 0;
}

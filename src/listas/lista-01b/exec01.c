#include <stdio.h>
#include <math.h>

int main() {
    double x, resultado;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    resultado = (x * x) + (3 * pow(x, x + 1)) / 2.0 + sqrt(x + 1);

    printf("\nResultado = %.4lf\n", resultado);

    return 0;
}

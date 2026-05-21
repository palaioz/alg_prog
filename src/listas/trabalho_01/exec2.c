/*
2. Encontre as raízes de uma equação de 2º grau ax2 + bx + c. O algoritmo deverá ler os
coeficientes a, b e c e calcular as raízes utilizando a fórmula de Báskara:
(−b ± √(b2−4ac))/2a
O algoritmo deve ficar lendo os valores dos coeficientes a, b e c até que os valores
fornecidos para os três coeficientes sejam 0 (zero). Para cada conjunto de valores de
coeficientes lidos, o algoritmo deverá calcular e escrever os valores das duas raízes x1 e
x2. Se as raízes forem imaginárias (∆ negativo, sendo ∆ = b2 - 4ac ) o algoritmo deverá
escrever que não foi possível calcular as raízes. Se a = 0, ele deve escrever que a equação
é de primeiro grau.
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

int main(){
	SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

	float a, b, c;
	double x1, x2;
	double delta;

	while (1)
	{
		system("cls");

		printf("CALCULAR FÓRMULA DE BÁSKARA\n");
		printf("============================\n");
		printf("Função quadrática: ax2 + bx + c\n");
		printf("Raízes: x = (-b ± √(b2-4ac))/2a\n\n");

		printf("Digite o valor dos coeficientes A, B e C (a b c): ");
		scanf("%f %f %f", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0)
		{
			return 0;
		}

		delta = (b * b) - (4 * a * c);
		x1 = ((-1 * b) + sqrt(delta))/2 * a;
		x2 = ((-1 * b) - sqrt(delta))/2 * a;

		printf("\nResultado: x1 = %f \t|\t x2 = %f\n", x1, x2);

		system("pause");
	}


	return 0;
}
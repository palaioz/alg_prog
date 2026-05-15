/*
5. Faça um algoritmo para calcular e mostrar a soma dos 50 primeiros elementos da série 
	(1000 / 1) - (997 / 2) + (994 / 3) - (991 / 4) + ...
*/

#include <stdio.h>

int main(){
	int s1 = 1000;
	int res;

	for (int i = 1; i < 51; i++){
		if (i % 2 == 0){
			res = res - (s1 / i);
		}

		res = res + (s1 / i);
		s1 = s1 - 3;
	}

	printf("%d \t%d", s1, res);

	return 0;
}
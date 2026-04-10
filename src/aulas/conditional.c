#include <stdio.h>

int main(void){

    while (1){
        float a, b, r = 0;

        printf("\nInforme o valor de a e b: ");
        scanf("%f %f", &a, &b);

        if (a != 0 && b != 0){
            r = a / b;
            printf("a / b = %.2f", r);
            
        } else if (scanf("%s", "exit")){

            return 0;

        } else{
            printf("Impossivel dividir por 0!\n");
            
        }
    }

    return 0;
}
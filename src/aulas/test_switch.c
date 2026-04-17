#include <stdio.h>

int main(){

    float a, b, r;
    char operador;

    printf("\n\nEscolha uma operacao:");
    printf("\n--> +");
    printf("\n--> -");
    printf("\n--> *");
    printf("\n--> /\n\n");
    printf("Sua opcao: ");
    fflush(stdin);
    scanf("%c", &operador);

    printf("Digite dois valores numeros:\n");
    scanf("%f", &a);
    scanf("%f", &b);

    switch(operador){
        case '+': printf("SOMA ::: ");
                  r = a + b;
                  printf("%.2f", r);
                  break;
        
        case '-': printf("SUBTRACAO ::: ");
                  r = a - b;
                  printf("%.2ff", r);
                  break;
        
        case '*': printf("MULTIPLICACAO ::: ");
                  r = a * b;
                  printf("%.2f", r);
                  break;
        
        case '/': printf("DIVISAO ::: ");
                  if (b != 0){
                      r = a / b;
                      printf("%.2f", r);
                  } else { printf("Impossivel dividir por zero!!"); }
                  break;
        default: printf("Opcao invalida!");
                 break;
    }

    return 0;
}
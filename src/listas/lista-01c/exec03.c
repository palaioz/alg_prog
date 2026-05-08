/*
Uma família deseja informatizar suas despesas domésticas, pois seu filho está cursando Ciência da 
Computação. Para o cálculo, as despesas da família são: água, luz, telefone, condomínio, mensalidade, 
saúde, alimentação, vestuário, transporte e segurança. As receitas são o salário do pai e o salário da 
mãe. Desenvolva um algoritmo para ler as receitas e despesas, calcular a renda total da família, calcular 
o total de despesas e o saldo final
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    printf("=================================\n");
    printf("CALCULAR ECONOMIAS FAMILIARES\n");
    printf("=================================\n\n");
    printf("Primeiro, vamos calcular as despesas familiares.\n");
    
    system("pause");
    
    // ------------------------ DESPESAS
    float despesas[10]; // array (vetor) com 10 valores (espaços reservados)

    // isto cria uma array de ponteiros para strings imutáveis com os nomes das despesas para ser printado na tela
    const char *nomesDespesas[] = {
        "agua", "luz", "telefone", "condominio", 
        "mensalidade", "saude", "alimentacao", 
        "vestuario", "transporte", "seguranca"
    }; 
    
    /* aqui, há um contador i, e iremos percorrer cada item da array "nomesDespesas".
    O loop irá buscar, com base no contador, o nome correspondente e escrever na tela.
    Finalizando, ele irá armazenar o valor digitado em forma de fila na array "despesas".
    Para "despesas", precisamos apenas dos valores inseridos pelo usuário, já que iremos somá-los no decorrer do programa. 
    */
    int qtd = sizeof(nomesDespesas) / sizeof(nomesDespesas[0]);
    for (int i = 0; i < qtd; i++){
        printf("Valor de %s: ", nomesDespesas[i]);
        scanf("%f", &despesas[i]);
        }
        
    // Soma das despesas
    float despesasTotais = 0;
    int qtdDespesas = sizeof(despesas) / sizeof(despesas[0]);
    for (int i = 0; i < qtdDespesas; i++){
        despesasTotais += despesas[i];
    }


    // ------------------------- RECEITAS
    float receitasTotais, salario_pai, salario_mae;

    printf("\nOk! Temos o total de despesas. Agora precisamos da renda total.\n\n");
    printf("Digite o salario do pai e da mae: ");
    scanf("%f %f", &salario_pai, &salario_mae);

    receitasTotais = salario_pai + salario_mae;

    // ------------------------- SALDO FINAL
    float saldo_final = receitasTotais - despesasTotais;
    
    printf("\nSaldo final: %.2f", saldo_final);

    return 0;
}
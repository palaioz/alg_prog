/*
3. Paulo tem 1,30 metro e cresce 2 centímetros por ano. Joaquim tem 1,25 metro e cresce 3
centímetros por ano. Construa um algoritmo que calcule e mostre quantos anos serão
necessários para que Joaquim esteja mais alto que Paulo.

*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float alt_paulo = 1.30;
    float alt_joaquim = 1.25;
    
    float cresc_paulo = 0.02;
    float cresc_joaquim = 0.03;
    
    int anos = 0;

    // ---------- PROCESSAMENTO
    while (alt_joaquim <= alt_paulo) {
        alt_paulo += cresc_paulo;
        alt_joaquim += cresc_joaquim;
        anos++;
    }

    // ---------- OUTPUT
    printf("\n---------------- EVOLUÇÃO ----------------\n");
    printf("Anos necessários: %d anos\n", anos);
    printf("Altura final Paulo: %.2fm\n", alt_paulo);
    printf("Altura final Joaquim: %.2fm\n", alt_joaquim);
    printf("------------------------------------------\n");

    return 0;
}

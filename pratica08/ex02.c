#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    int *pInteiro;
    float *pReal;
    char *pCaractere;

    pInteiro = &inteiro;
    pReal = &real;
    pCaractere = &caractere;

    printf("Antes da modificacao:\n");
    printf("inteiro: %d, real: %.2f, caractere: %c\n", inteiro, real, caractere);

    *pInteiro = 20;
    *pReal = 6.28;
    *pCaractere = 'B';

    printf("Apos a modificacao:\n");
    printf("inteiro: %d, real: %.2f, caractere: %c\n", inteiro, real, caractere);

    return 0;
}

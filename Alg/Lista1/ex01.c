#include <stdio.h>

int main() {
    int var1, var2;

    printf("Digite o valor da primeira variavel: ");
    scanf("%d", &var1);
    
    printf("Digite o valor da segunda variavel: ");
    scanf("%d", &var2);

    if (&var1 > &var2) {
        printf("Conteudo da variavel com maior endereco: %d\n", var1);
    } else {
        printf("Conteudo da variavel com maior endereco: %d\n", var2);
    }

    return 0;
}

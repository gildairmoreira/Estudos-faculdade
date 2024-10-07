#include <stdio.h>

int main() {
    char nome[100];
    int contador_letras = 0;

    printf("Entre com um nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] != ' ' && nome[i] != '\n') {
            contador_letras++;
        }
    }

    printf("%d letras\n", contador_letras);

    return 0;
}

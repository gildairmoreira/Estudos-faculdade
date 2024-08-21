#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i;
    char **palavras;
    int num_palavras = 10;

    palavras = (char **)malloc(num_palavras * sizeof(char *));
    if (palavras == NULL) {
        printf("Erro de alocacao de memoria!\n");
        return 1;
    }

    for (i = 0; i < num_palavras; i++) {
        palavras[i] = (char *)malloc(100 * sizeof(char));
        if (palavras[i] == NULL) {
            printf("Erro de alocacao de memoria!\n");
            return 1;
        }
        printf("Digite a palavra %d: ", i + 1);
        scanf("%99s", palavras[i]);
    }

    printf("\nPalavras digitadas:\n");
    for (i = 0; i < num_palavras; i++) {
        printf("%s\n", palavras[i]);
    }

    for (i = 0; i < num_palavras; i++) {
        free(palavras[i]);
    }

    free(palavras);

    return 0;
}

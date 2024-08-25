#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numPalavras = 10;
    char **matriz = (char **)malloc(numPalavras * sizeof(char *));
    
    if (matriz == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < numPalavras; i++) {
        matriz[i] = (char *)malloc(50 * sizeof(char));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memoria.\n");
            return 1;
        }
        printf("Digite a palavra %d: ", i + 1);
        scanf("%s", matriz[i]);
    }

    printf("\nPalavras armazenadas:\n");
    for (int i = 0; i < numPalavras; i++) {
        printf("%s\n", matriz[i]);
    }

    for (int i = 0; i < numPalavras; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}

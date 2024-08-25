#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = (int *)calloc(500, sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    int zeros = 0;
    for (int i = 0; i < 500; i++) {
        if (vetor[i] == 0) {
            zeros++;
        }
    }

    if (zeros == 500) {
        printf("Todos os 500 valores foram inicializados com zero.\n");
    } else {
        printf("Nem todos os valores foram inicializados com zero.\n");
    }

    for (int i = 0; i < 500; i++) {
        vetor[i] = i;
    }

    printf("\nOs 10 primeiros elementos:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\nOs 10 ultimos elementos:\n");
    for (int i = 490; i < 500; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}

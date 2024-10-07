#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int*) malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}

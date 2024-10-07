#include <stdio.h>

int main() {
    int matriz[5][5];
    int soma = 0;

    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nElementos da diagonal secundaria:\n");
    for (int i = 0; i < 5; i++) {
        int j = 4 - i;
        printf("%d ", matriz[i][j]);
        soma += matriz[i][j];
    }
    printf("\n");

    printf("\nSoma dos elementos da diagonal secundaria: %d\n", soma);

    return 0;
}

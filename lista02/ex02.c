#include <stdio.h>

int main() {
    int matriz[5][5];
    int soma = 0;

    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Impressão dos elementos da diagonal secundária
    printf("\nElementos da diagonal secundária:\n");
    for (int i = 0; i < 5; i++) {
        int j = 4 - i;  // Calcula o índice da coluna para a diagonal secundária
        printf("%d ", matriz[i][j]);
        soma += matriz[i][j];  // Soma os elementos da diagonal secundária
    }
    printf("\n");

    // Impressão da soma dos elementos da diagonal secundária
    printf("\nSoma dos elementos da diagonal secundária: %d\n", soma);

    return 0;
}

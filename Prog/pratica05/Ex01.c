#include <stdio.h>

int main() {
    int matriz[4][4];
    
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nMatriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nPosicoes dos numeros pares:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] % 2 == 0) {
                printf("Posicao [%d][%d] com valor %d\n", i, j, matriz[i][j]);
            }
        }
    }
    
    return 0;
}

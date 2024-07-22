#include <stdio.h>

int main() {
    int matriz[5][5];
    
    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nElementos da diagonal principal:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");
    
    return 0;
}

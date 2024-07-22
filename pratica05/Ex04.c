#include <stdio.h>

int main() {
    float matriz[3][3];
    float soma = 0;
    int totalElementos = 3 * 3;

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    
    float media = soma / totalElementos;
    
    printf("\nA media aritmetica dos elementos da matriz e: %.2f\n", media);
    
    return 0;
}

#include <stdio.h>

int main() {
    int matriz[5][2];
    int count2 = 0, count3 = 0, count5 = 0;

    printf("Digite os elementos da matriz 5x2 (valores de 0 a 9):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            do {
                printf("Elemento [%d][%d]: ", i, j);
                scanf("%d", &matriz[i][j]);

                if (matriz[i][j] < 0 || matriz[i][j] > 9) {
                    printf("Valor invalido! Digite um valor entre 0 e 9.\n");
                }
            } while (matriz[i][j] < 0 || matriz[i][j] > 9);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            if (matriz[i][j] == 2) {
                count2++;
            }
            if (matriz[i][j] == 3) {
                count3++;
            }
            if (matriz[i][j] == 5) {
                count5++;
            }
        }
    }

    printf("\nQuantidade de numeros 2 na matriz: %d\n", count2);
    printf("Quantidade de numeros 3 na matriz: %d\n", count3);
    printf("Quantidade de numeros 5 na matriz: %d\n", count5);

    return 0;
}

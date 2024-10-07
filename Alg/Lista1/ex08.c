#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;

    printf("Digite o numero de linhas (N): ");
    scanf("%d", &N);
    printf("Digite o numero de colunas (M): ");
    scanf("%d", &M);

    int **matriz = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        matriz[i] = (int *)malloc(M * sizeof(int));
    }

    int **transposta = (int **)malloc(M * sizeof(int *));
    for (int i = 0; i < M; i++) {
        transposta[i] = (int *)malloc(N * sizeof(int));
    }

    printf("Digite os elementos da matriz %d x %d:\n", N, M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            transposta[j][i] = matriz[i][j]; // Construindo a transposta
        }
    }

    printf("\nMatriz original (%d x %d):\n", N, M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta (%d x %d):\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++) {
        free(matriz[i]);
    }
    free(matriz);

    for (int i = 0; i < M; i++) {
        free(transposta[i]);
    }
    free(transposta);

    return 0;
}

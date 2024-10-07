#include <stdio.h>
#include <stdlib.h>

int** alocarMatriz(int linhas, int colunas) {
    int **matriz = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    }
    return matriz;
}

void liberarMatriz(int **matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

void imprimirMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N, M;

    printf("Digite o numero de linhas (N) da matriz: ");
    scanf("%d", &N);
    printf("Digite o numero de colunas (M) da matriz: ");
    scanf("%d", &M);

    int **matriz = alocarMatriz(N, M);
    printf("Digite os elementos da matriz NxM:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int **matrizTransposta = alocarMatriz(M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            matrizTransposta[i][j] = matriz[j][i];
        }
    }

    printf("\nMatriz NxM:\n");
    imprimirMatriz(matriz, N, M);

    printf("\nMatriz transposta MxN:\n");
    imprimirMatriz(matrizTransposta, M, N);

    liberarMatriz(matriz, N);
    liberarMatriz(matrizTransposta, M);

    return 0;
}

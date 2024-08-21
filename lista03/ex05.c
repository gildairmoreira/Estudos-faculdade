#include <stdio.h>
#include <stdlib.h>

// Funcao para alocar uma matriz dinamicamente
int** alocarMatriz(int linhas, int colunas) {
    int **matriz = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    }
    return matriz;
}

// Funcao para liberar a memoria alocada para uma matriz
void liberarMatriz(int **matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

// Funcao para exibir uma matriz
void exibirMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N, M;

    printf("Digite o numero de linhas (N): ");
    scanf("%d", &N);
    printf("Digite o numero de colunas (M): ");
    scanf("%d", &M);

    // Alocar e preencher a matriz N x M
    int **matriz = alocarMatriz(N, M);
    printf("Preencha a matriz %d x %d:\n", N, M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Alocar a matriz transposta M x N
    int **matrizTransposta = alocarMatriz(M, N);

    // Construir a matriz transposta
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matrizTransposta[j][i] = matriz[i][j];
        }
    }

    // Mostrar a matriz original
    printf("\nMatriz %d x %d:\n", N, M);
    exibirMatriz(matriz, N, M);

    // Mostrar a matriz transposta
    printf("\nMatriz transposta %d x %d:\n", M, N);
    exibirMatriz(matrizTransposta, M, N);

    // Liberar memoria
    liberarMatriz(matriz, N);
    liberarMatriz(matrizTransposta, M);

    return 0;
}

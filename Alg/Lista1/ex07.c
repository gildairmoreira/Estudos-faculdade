#include <stdio.h>
#include <stdlib.h>

int main() {
    int *memoria;
    int tamanho_bytes, tamanho_memoria;
    int opcao, posicao, valor;

    printf("Digite o tamanho da memoria (em bytes, multiplo de %lu): ", sizeof(int));
    scanf("%d", &tamanho_bytes);

    if (tamanho_bytes % sizeof(int) != 0) {
        printf("O tamanho deve ser multiplo de %lu bytes.\n", sizeof(int));
        return 1;
    }

    tamanho_memoria = tamanho_bytes / sizeof(int);
    memoria = (int*) malloc(tamanho_memoria * sizeof(int));

    if (memoria == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < tamanho_memoria; i++) {
        memoria[i] = 0;
    }

    do {
        printf("\nMenu:\n");
        printf("1 - Inserir valor em uma posicao\n");
        printf("2 - Consultar valor em uma posicao\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite a posicao (0 a %d): ", tamanho_memoria - 1);
                scanf("%d", &posicao);

                if (posicao < 0 || posicao >= tamanho_memoria) {
                    printf("Posicao invalida!\n");
                } else {
                    printf("Digite o valor a ser inserido: ");
                    scanf("%d", &valor);
                    memoria[posicao] = valor;
                    printf("Valor %d inserido na posicao %d.\n", valor, posicao);
                }
                break;

            case 2:
                printf("Digite a posicao (0 a %d): ", tamanho_memoria - 1);
                scanf("%d", &posicao);

                if (posicao < 0 || posicao >= tamanho_memoria) {
                    printf("Posicao invalida!\n");
                } else {
                    printf("Valor na posicao %d: %d\n", posicao, memoria[posicao]);
                }
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    free(memoria);

    return 0;
}

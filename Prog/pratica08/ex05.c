#include <stdio.h>

void preencheVetor(int *vet, int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vet[i]);
    }
}

void imprimeVetor(int *vet, int n) {
    printf("Valores do vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int retornaMaiorElemento(int *vet, int n) {
    int maior = vet[0];
    for (int i = 1; i < n; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }
    return maior;
}

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    preencheVetor(vetor, n);

    imprimeVetor(vetor, n);

    int maior = retornaMaiorElemento(vetor, n);
    printf("O maior elemento do vetor e: %d\n", maior);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int existeNoVetor(int *vetor, int tamanho, int numero) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int numerosLoteria[6];
    int numerosBilhete[6];
    int acertos = 0;

    printf("Digite os 6 numeros da loteria (entre 0 e 20, sem repetidos):\n");
    for (int i = 0; i < 6; i++) {
        int numero;
        do {
            printf("Numero %d: ", i + 1);
            scanf("%d", &numero);
        } while (numero < 0 || numero > 20 || existeNoVetor(numerosLoteria, i, numero));
        numerosLoteria[i] = numero;
    }

    printf("Digite os 6 numeros do bilhete (entre 0 e 20, sem repetidos):\n");
    for (int i = 0; i < 6; i++) {
        int numero;
        do {
            printf("Numero %d: ", i + 1);
            scanf("%d", &numero);
        } while (numero < 0 || numero > 20 || existeNoVetor(numerosBilhete, i, numero));
        numerosBilhete[i] = numero;
    }

    for (int i = 0; i < 6; i++) {
        if (existeNoVetor(numerosBilhete, 6, numerosLoteria[i])) {
            acertos++;
        }
    }

    int *numerosCorretos = (int *)malloc(acertos * sizeof(int));
    if (numerosCorretos == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    int indice = 0;
    for (int i = 0; i < 6; i++) {
        if (existeNoVetor(numerosBilhete, 6, numerosLoteria[i])) {
            numerosCorretos[indice++] = numerosLoteria[i];
        }
    }

    printf("\nNumeros sorteados:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", numerosLoteria[i]);
    }

    printf("\n\nNumeros corretos:\n");
    for (int i = 0; i < acertos; i++) {
        printf("%d ", numerosCorretos[i]);
    }

    free(numerosCorretos);

    return 0;
}

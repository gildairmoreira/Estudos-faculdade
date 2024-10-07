#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros = NULL;
    int quantidade = 0;
    int numero;

    printf("Digite numeros (digite um numero negativo para parar):\n");
    
    while (1) {
        scanf("%d", &numero);
        if (numero < 0) break;
        
        int *temp = realloc(numeros, (quantidade + 1) * sizeof(int));
        if (temp == NULL) {
            printf("Erro ao alocar memoria.\n");
            free(numeros);
            return 1;
        }

        numeros = temp;
        numeros[quantidade] = numero;
        quantidade++;
    }

    printf("\nVetor lido:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    free(numeros);

    return 0;
}

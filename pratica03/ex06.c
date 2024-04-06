#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    printf("Digite numeros inteiros (digite um numero negativo para sair):\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero >= 0) {
            soma += numero;
        } else {
            break;
        }
    }

    printf("A soma dos numeros digitados e: %d\n", soma);

    return 0;
}

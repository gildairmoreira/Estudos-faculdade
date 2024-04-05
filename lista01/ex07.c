#include <stdio.h>

int main() {
    int numero, somaPares = 0, quantidadeImpares = 0;

    printf("Entre com 6 numeros: ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &numero);
        if (numero % 2 == 0) {
            somaPares += numero;
            printf("Numero par digitado: %d\n", numero);
        } else {
            quantidadeImpares++;
            printf("Numero impar digitado: %d\n", numero);
        }
    }

    printf("Soma dos numeros pares digitados: %d\n", somaPares);
    printf("Quantidade de numeros impares digitados: %d\n", quantidadeImpares);

    return 0;
}

#include <stdio.h>

void mostrarIntervalo(int *n) {
    for(int i = 1; i <= *n; i += 3) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int N;

    printf("Digite um valor inteiro para N: ");
    scanf("%d", &N);

    mostrarIntervalo(&N);

    return 0;
}

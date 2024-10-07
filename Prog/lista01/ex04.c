#include <stdio.h>

int main() {
    int inicio, fim, soma = 0;

    printf("Digite o valor inicial e valor final: ");
    scanf("%d %d", &inicio, &fim);

    while(inicio > fim) {
        printf("Digite o valor inicial e valor final: ");
        scanf("%d %d", &inicio, &fim);
    }

    for(int i = inicio; i <= fim; i++) {
        if(i % 2 != 0) {
            soma += i;
        }
    }

    printf("Soma dos impares neste intervalo: %d\n", soma);

    return 0;
}

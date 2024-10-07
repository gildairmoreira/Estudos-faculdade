#include <stdio.h>

int main() {
    int idade, soma = 0, quantidade = 0;

    while (1) {
        printf("Digite a idade (digite 0 para finalizar): ");
        scanf("%d", &idade);

        if (idade != 0) {
            soma += idade;
            quantidade++;
        } else {
            break;
        }
    }

    if (quantidade > 0) {
        float media = (float)soma / quantidade;
        printf("A media das idades digitadas e: %.2f\n", media);
    } else {
        printf("Nenhuma idade valida foi digitada.\n");
    }

    return 0;
}

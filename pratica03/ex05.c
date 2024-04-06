#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    // Verifica se o número é positivo
    if (n < 0) {
        printf("Erro: O numero digitado nao e positivo.\n");
        return 0; // Encerra o programa com código de erro
    }

    printf("Numeros em ordem crescente:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Numeros em ordem decrescente:\n");
    for (int i = n; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

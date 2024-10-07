#include <stdio.h>

int maiorNumero(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1, num2, maior;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    maior = maiorNumero(num1, num2);

    printf("O maior numero é: %d\n", maior);

    return 0;
}

#include <stdio.h>

int EhNumeroPrimo(int num) {
    if(num <= 1) return 0;
    if(num % 2 == 0 && num > 2) return 0;
    for(int i = 3; i * i <= num; i += 2) {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    int cont = 0;
    int soma = 0;

    printf("Entre com o valor de n: ");
    scanf("%d", &n);

    for(int i = 2; cont < n; i++) {
        if(EhNumeroPrimo(i)) {
            soma += i;
            cont++;
        }
    }
    printf("A soma dos n primeiros numeros primos e: %d\n", soma);

    return 0;
}

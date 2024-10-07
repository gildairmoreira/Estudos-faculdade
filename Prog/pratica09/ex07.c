#include <stdio.h>

unsigned long long hiperfatorial(int n) {
    if (n == 1) {
        return 1;
    }
    return (unsigned long long)pow(n, n) * hiperfatorial(n - 1);
}

int main() {
    int n;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Numero invalido.\n");
        return 1;
    }

    printf("Hiperfatorial de %d: %llu\n", n, hiperfatorial(n));

    return 0;
}

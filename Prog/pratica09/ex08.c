#include <stdio.h>

int mdc(int x, int y) {
    if (y == 0) {
        return x;
    }
    return mdc(y, x % y);
}

int main() {
    int x, y;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);

    printf("O MDC de %d e %d e: %d\n", x, y, mdc(x, y));

    return 0;
}

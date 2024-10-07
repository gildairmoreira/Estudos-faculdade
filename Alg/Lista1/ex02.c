#include <stdio.h>

void ordenar(int *a, int *b) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int x, y;
    
    scanf("%d %d", &x, &y);
    
    ordenar(&x, &y);
    
    printf("%d %d\n", x, y);
    
    return 0;
}

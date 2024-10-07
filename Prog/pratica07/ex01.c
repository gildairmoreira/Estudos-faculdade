#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int LancaMoeda() {
    return rand() % 2;
}

int main() {
    int sorteio;
    int contCara = 0;
    int contCoroa = 0;

    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        sorteio = LancaMoeda();
        if (sorteio == 0) {
            printf("Cara\n");
            contCara++;
        } else {
            printf("Coroa\n");
            contCoroa++;
        }
    }

    printf("\nCara: %d, Coroa: %d\n", contCara, contCoroa);
    return 0;
}

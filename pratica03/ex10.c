#include <stdio.h>

int main() {
    int inteiro = 0;

    while (inteiro <= 100000) {
        printf("%d\n", inteiro);
        inteiro += 1000; 
    }

    return 0;
}

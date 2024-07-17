#include <stdio.h>

int ehConsoante(char c) {
    if ((c >= 'a' && c <= 'z') && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
        return 1;
    }
    return 0;
}

int main() {
    char str[100];
    int consoantes = 0;

    printf("Digite uma string (Em Minusculo): ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (ehConsoante(str[i])) {
            printf("%c", str[i]);
            consoantes++;
        }
    }

    printf("\nQuantidade de consoantes: %d\n", consoantes);

    return 0;
}

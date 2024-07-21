#include <stdio.h>

int ehConsoante(char c) {
    if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
        return 1;
    }
    return 0;
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    gets(str);

    printf("Consoantes na string: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (ehConsoante(str[i])) {
            printf("%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}

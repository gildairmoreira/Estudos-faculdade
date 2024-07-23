#include <stdio.h>

int main() {
    char str[100];

    printf("Entre com uma string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '!' || str[i] == '?' || str[i] == '+' || str[i] == '-' || str[i] == '=') {
            str[i] = '$';
        }
    }

    printf("String modificada: %s\n", str);

    return 0;
}

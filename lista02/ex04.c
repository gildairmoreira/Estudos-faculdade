#include <stdio.h>

int main() {
    char str[100];  // Define um array para armazenar a string. Ajuste o tamanho se necessário.

    // Leitura da string
    printf("Entre com uma string: ");
    fgets(str, sizeof(str), stdin);  // Lê a string incluindo espaços

    // Substituição dos caracteres especificados por '$'
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '!' || str[i] == '?' || str[i] == '+' || str[i] == '-' || str[i] == '=') {
            str[i] = '$';
        }
    }

    // Impressão da string modificada
    printf("String modificada: %s\n", str);

    return 0;
}

#include <stdio.h>
#include <ctype.h>  // Para a função isalpha

int main() {
    char nome[100];  // Define um array para armazenar o nome. Ajuste o tamanho se necessário.
    int i, count = 0;

    // Leitura do nome completo
    printf("Entre com um nome completo: ");
    fgets(nome, sizeof(nome), stdin);  // Lê a string incluindo espaços

    // Contagem das letras, ignorando espaços
    for (i = 0; nome[i] != '\0'; i++) {
        if (isalpha(nome[i])) {  // Verifica se o caractere é uma letra
            count++;
        }
    }

    // Impressão do número total de letras
    printf("%d letras\n", count);

    return 0;
}

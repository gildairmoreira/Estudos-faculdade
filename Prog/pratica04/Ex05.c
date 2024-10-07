#include <stdio.h>

int main() {
    char nomeUser[50];
    int i;
    int tamanho = 0;

    printf("Digite o Seu Nome: ");
    gets(nomeUser);

    for (contLetras = 0; nomeUser[contLetras] != '\0'; contLetras++) {
        if (nomeUser[contLetras] == '\n') {  
            nomeUser[contLetras] = '\0';    
            break;
        }
    }

    printf("O tamanho da string e: %d\n", contLetras);

    return 0;
}

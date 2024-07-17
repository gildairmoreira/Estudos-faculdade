#include <stdio.h>

int main()
{
    char nomeUser[50];
    int contLetras;

    printf("Digite o Seu Nome: ");
    fgets(nomeUser, sizeof(nomeUser), stdin);

    for (contLetras = 0; nomeUser[contLetras] != '\0'; contLetras++)
    {
    }


    printf("O tamanho da string e: %d\n", contLetras);

    return 0;
}

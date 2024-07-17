#include <stdio.h>

int main()
{
    float vetor[15];
    int codigo;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite um numero real: ");
        while (scanf("%f", &vetor[i]) != 1)
        {
            printf("Entrada invalida. Digite um numero real: ");
            while (getchar() != '\n')
                ;
        }
    }

    // Leitura do código
    printf("Digite o codigo (1 para ordem direta, 2 para ordem inversa): ");
    while (scanf("%d", &codigo) != 1)
    {
        printf("Entrada invalida. Digite um codigo inteiro: ");
        while (getchar() != '\n')
            ;
    }

    // Processamento do código
    if (codigo == 1)
    {
        // Ordem direta
        printf("Vetor em ordem direta: ");
        for (int i = 0; i < 15; i++)
        {
            printf("%.2f ", vetor[i]);
        }
        printf("\n");
    }
    else if (codigo == 2)
    {
        // Ordem inversa
        printf("Vetor em ordem inversa: ");
        for (int i = 14; i >= 0; i--)
        {
            printf("%.2f ", vetor[i]);
        }
        printf("\n");
    }
    else
    {
        // Código inválido
        printf("Codigo invalido. Programa finalizado.\n");
    }

    return 0;
}

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

    printf("Digite o codigo (1 para ordem direta, 2 para ordem inversa): ");
    while (scanf("%d", &codigo) != 1)
    {
        printf("Entrada invalida. Digite um codigo inteiro: ");
        while (getchar() != '\n')
            ;
    }

    if (codigo == 1)
    {
        printf("Vetor em ordem direta: ");
        for (int i = 0; i < 15; i++)
        {
            printf("%.2f ", vetor[i]);
        }
        printf("\n");
    }
    else if (codigo == 2)
    {
        printf("Vetor em ordem inversa: ");
        for (int i = 14; i >= 0; i--)
        {
            printf("%.2f ", vetor[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Codigo invalido. Programa finalizado.\n");
    }

    return 0;
}

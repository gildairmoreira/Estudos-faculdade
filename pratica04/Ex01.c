#include <stdio.h>

int main()
{
    int vetor[10];
    int count2 = 0, count3 = 0, count5 = 0;

    for (int i = 0; i < 10; i++)
    {
        int num;
        printf("Digite um numero inteiro entre 0 e 9: ");
        while (scanf("%d", &num) != 1 || num < 0 || num > 9)
        {
            printf("Entrada invalida. Digite um numero inteiro entre 0 e 9: ");
            while (getchar() != '\n');
        }
        vetor[i] = num;
    }

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] == 2)
            count2++;
        if (vetor[i] == 3)
            count3++;
        if (vetor[i] == 5)
            count5++;
    }

    printf("Quantidade de numeros 2: %d\n", count2);
    printf("Quantidade de numeros 3: %d\n", count3);
    printf("Quantidade de numeros 5: %d\n", count5);

    return 0;
}
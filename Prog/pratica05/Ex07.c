#include <stdio.h>

int main()
{
    int matriz[2][5];
    int contImpares = 0;

 printf("Digite os elementos da matriz 2x5:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matriz[i][j] % 2 != 0)
            {
                printf("%d ", matriz[i][j]);
                contImpares++;
            }
            
        }
        
    }
    printf("\nA quantidade de numeros impares Nesta matriz e: %d", contImpares);
    

    return 0;
}

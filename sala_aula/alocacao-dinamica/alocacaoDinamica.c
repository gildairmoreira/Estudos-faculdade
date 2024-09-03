#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contZero = 0;

    int *ptr = (int *)calloc(500, sizeof(int));

    if (ptr == NULL)
    {
        printf("Invalido");
        exit(1);
    }

    for (int i = 0; i < 500; i++)
    {
        if (ptr[i] != 0)
        {
            contZero++;
            break;
        }
    }

    return 0;
}

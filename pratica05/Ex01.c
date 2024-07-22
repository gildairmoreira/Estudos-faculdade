#include <stdio.h>

int main()
{
    int i,j;
    int mat[4][4];
    
    printf("digite os numeros da matriz: ");
    gets(mat);

    for (i = 0; mat[i][j]; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf(mat[i][j]);
        }
        
    }
    


    return 0;
}

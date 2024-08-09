#include <stdio.h>

void troca(int *x,int *y,int x1, int y1)
{
    *x = y1;
    *y = x1;
}

int main()
{
    int x = 5;
    int y = 6;


    printf("%d %d\n", x,y);
    troca(&x,&y,x,y);
    printf("%d %d", x,y);

    return 0;
}

#include <stdio.h>

void function(int *x)
{
    *x += 2;
}

int main()
{
    int x = 8;


    //printf("%d\n", function(&x));
    function(&x);
    printf("%d", x);

    return 0;
}

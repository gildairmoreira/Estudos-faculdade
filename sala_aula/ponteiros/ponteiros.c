#include <stdio.h>

int main()
{
    int a = 5;
    // int *p = NULL;
    int *p = &a;

    int *ptr = &p;

    ptr = 50;

    printf("%d", ptr);

    return 0;
}

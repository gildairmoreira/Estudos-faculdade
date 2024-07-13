#include <stdio.h>
#include <string.h> // <-----------

int main()
{
    int i;
    char str[60];

    printf("Entre com uma palavra:\n");

    //scanf("%s", str);
    gets(str);

    printf("str = %s", str);         //<---- mesma coisa
    //printf(" str = %s", &str[0]);    //<---- mesma coisa

    /* int i;
    char str[6] = "ola!";
    char str2[6];

    for (i = 0; str[i] != '\0'; i++)
    {
        str2[i] = str[i];
    }

    str2[i] = '\0';

    printf("str2 = %s", str2); */

    /*char str[6] = "abcde";
     str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = 'd';
    str[4] = 'e';
    str[5] = '\0'; */

    return 0;
}

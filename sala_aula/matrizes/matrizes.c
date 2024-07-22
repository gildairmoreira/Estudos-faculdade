#include <stdio.h>
#include <string.h>

int main()
{
    char str1[15] = "Bom ";
    char str2[15] = "dia";
    strcat(str1, str2); //concatena
    printf("%s", str1);

    if (strcmp(str1, str2) == 0) //compara se a string e igual e retorna zero ou 1 true or false
    {
    }

    return 0;
}

#include <stdio.h>

int main()
{
    float numUser;
    float result;

    printf("===== Digite um Numero Para saber o seu Quadrado ===== \n");

    scanf("%f", &numUser);
    
    result = numUser * numUser;
    printf("O Quadrado de %.1f e %.1f",numUser, result);


    return 0;
}

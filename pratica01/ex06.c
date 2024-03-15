#include <stdio.h>

int main()
{
    int anoNascimento, anoAtual, idade, idadeEm2042;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;

    idadeEm2042 = idade + (2042 - anoAtual);

    printf("A idade da pessoa e: %d anos\n", idade);
    printf("Em 2042, a pessoa tera: %d anos\n", idadeEm2042);

    return 0;
}

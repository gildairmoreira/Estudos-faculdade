#include <stdio.h>

void exibirDataPorExtenso(int dia, int mes, int ano)
{
    const char *meses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

    printf("%d de %s de %d\n", dia, meses[mes - 1], ano);
}

int main()
{
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mês: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    exibirDataPorExtenso(dia, mes, ano);

    return 0;
}

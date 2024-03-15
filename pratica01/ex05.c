#include <stdio.h>

int main()
{
    float salario, novoSalario;

    printf("Digite o salario do funcionario: R$ ");
    scanf("%f", &salario);

    novoSalario = salario * 1.25;

    printf("O novo salario do funcionario e: R$ %.2f\n", novoSalario);

    return 0;
}

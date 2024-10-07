#include <stdio.h>

int main()
{
  float baseMaior, baseMenor, altura, area;

  printf("Digite o valor da base maior (deve ser maior que zero): ");
  scanf("%f", &baseMaior);

  if (baseMaior <= 0)
  {
    printf("Erro: a base maior deve ser um numero maior que zero.\n");
    return 1;
  }

  printf("Digite o valor da base menor (deve ser maior que zero): ");
  scanf("%f", &baseMenor);

  if (baseMenor <= 0)
  {
    printf("Erro: a base menor deve ser um numero maior que zero.\n");
    return 1;
  }

  printf("Digite o valor da altura: ");
  scanf("%f", &altura);

  area = (baseMaior + baseMenor) * altura / 2;

  printf("A area do trapezio e: %.2f\n", area);

  return 0;
}

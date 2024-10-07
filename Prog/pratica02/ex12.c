#include <stdio.h>

int main()
{
  float A, B, C;

  printf("Digite o valor de A: ");
  scanf("%f", &A);
  printf("Digite o valor de B: ");
  scanf("%f", &B);
  printf("Digite o valor de C: ");
  scanf("%f", &C);

  if (A < B + C && B < A + C && C < A + B)
  {
    if (A == B && B == C)
    {
      printf("Triangulo Equilatero\n");
    }
    else if (A == B || B == C || A == C)
    {
      printf("Triangulo Isosceles\n");
    }
    else
    {
      printf("Triangulo Escaleno\n");
    }
  }
  else
  {
    printf("Os valores não podem ser os lados de um triangulo\n");
  }

  return 0;
}

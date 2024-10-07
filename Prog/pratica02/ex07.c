#include <stdio.h>

int main()
{
  float num1,num2,num3;

  printf("Entre com o Primeiro Numero: \n");
  scanf("%f", &num1);

  printf("Entre com o Segundo Numero: \n");
  scanf("%f", &num2);

  printf("Entre com o Terceiro Numero: \n");
  scanf("%f", &num3);

  if (num1 > num2)
  {
    float controladora = num1;
    num1 = num2;
    num2 = controladora;
  }
  if (num2 > num3)
  {
    float controladora = num2;
    num2 = num3;
    num3 = controladora;
  }
  if (num1 > num2)
  {
    float controladora = num1;
    num1 = num2;
    num2 = controladora;
  }

  printf("Numeros em ordem crescente: %.2f, %.2f, %.2f\n", num1, num2, num3);

  return 0;
}
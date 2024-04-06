#include <stdio.h>

int calculaFatorial(int numero)
{
  int resultado = 1;
  for (int i = 1; i <= numero; i++)
  {
    resultado *= i;
  }
  return resultado;
}

int main()
{
  int numero = 5;
  int fatorial = 0;

  printf("Digite um numero inteiro para calcular o fatorial: ");
  scanf("%d", &numero);

  if (numero < 0)
  {
    printf("numero tem que ser possitivo.\n");
    return 0;
  }

  fatorial = calculaFatorial(numero);

  printf("%d! = %d\n", numero, fatorial);

  return 0;
}
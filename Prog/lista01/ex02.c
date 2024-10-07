#include <stdio.h>

int main() {
  int numInicial = 1, numFinal = 100, result1 = 0, result2 = 0, soma=0, dif=0;

  for (int i = numInicial; i <= numFinal; i++)
  {
    result1 += (i*i);
  }
  printf("A soma dos quadrados dos 100 primeiros numeros naturais e: %d\n", result1);

  for (int i = numInicial; i <= numFinal; i++)
  {
    soma += i;
    result2 = (soma * soma);
  }
  printf("O quadrado da soma dos 100 primeiros numeros naturais e: %d\n", result2);

  dif = result2 - result1;
  printf("A diferenca entre e a soma dos quadrados dos 100 primeiros numeros naturais e o quadrado da soma e: %d\n",dif);

  return 0;
};
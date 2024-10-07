#include <stdio.h>

int main()
{
  int numInicial, numFinal, result=0;

  printf("Digite o valor inicial e valor final:");
  scanf("%d %d", &numInicial, &numFinal);


if (numInicial > numFinal) {
  printf("O valor final Nao pode ser menor que O valor Inicial\n");
} else {
  for (int i = numInicial; i <= numFinal; i++)
  {
    if (i % 2 != 0) {
      result += i;
    }
  }
  printf("A soma dos numeros impares no intervalo de %d a %d e: %d\n", numInicial,numFinal, result);
}
  
  return 0;
}
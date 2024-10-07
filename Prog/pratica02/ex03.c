#include <stdio.h>

int main(void) {
  int num1, num2, maior, diferenca;

  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  if (num1 > num2) {
    maior = num1;
  } else {
    maior = num2;
  }

  diferenca = maior - num1;
  if (num1 > num2) {
    diferenca = num1 - num2;
  }

  printf("O maior numero e %d.\n", maior);
  printf("A diferenca entre os dois numeros e %d.\n", diferenca);

  return 0;
}

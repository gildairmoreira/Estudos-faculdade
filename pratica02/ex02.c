#include <stdio.h>

int main(void) {
  int number;

  // Leitura do numero
  printf("Digite um numero: \n");
  scanf("%d", &number);

  // Verificação se o numero é divisível por 3
  if (number % 3 == 0) {
    printf("O numero %d e divisivel por 3.\n", number);
  } else {
    printf("O numero %d nao e divisivel por 3.\n", number);
  }

  return 0;
}

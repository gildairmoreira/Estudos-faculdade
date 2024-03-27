#include <stdio.h>

int main(void) {
  int number;

  printf("Digite Um numeroS Para saber Se e Par Ou Impar:\n");

  scanf("%d", &number);

  printf("O Numero %d e %s.\n", number, (number % 2 == 0) ? "par" : "impar");

  return 0;
}

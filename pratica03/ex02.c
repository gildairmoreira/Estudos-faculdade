#include <stdio.h>

int main() {
  int soma = 0, cont;

  for (cont = 1; cont <= 50; cont++) {
    if (cont % 2 == 0) {
      soma += cont;
    }
  }

  printf("A soma dos 50 primeiros numeros pares e: %d\n", soma);

  return 0;
}

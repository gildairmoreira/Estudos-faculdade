#include <stdio.h>

int main() {
  int soma=0;
  int cont;
  int contImpares = 0;
  int numUser;

  printf("Digite o Numero 'n': ");
  scanf("%d",&numUser);


  printf("Os %d primeiros numeros impares Sao:\n", numUser);
  for (cont = 0; contImpares < numUser; cont++) {
    if (cont % 2 != 0) {
      printf("%d, ",cont);
      contImpares++;
      soma+=cont;
    }
  }

  printf("E a soma deles e: %d\n", soma);


  return 0;
}

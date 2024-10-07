#include <stdio.h>

int main()
{
  int num = 0;
  int digito1;
  int digito2;
  int digito3;
  int digito4;

  do
  {
    printf("Entre com um numero de 4 algarismos: ");
    scanf("%d", &num);

  } while (num < 1000 || num >= 10000);
    digito1 = num / 1000;
    digito2 = (num % 1000) / 100;
    digito3 = (num % 100) / 10;
    digito4 = num % 10;

  printf("Numero %d:\n %d\n %d\n %d\n %d\n",num, digito1, digito2, digito3, digito4);
  return 0;
}

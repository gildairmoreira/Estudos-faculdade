#include <stdio.h>

int main()
{
  int codigo;
  
  printf("Digite o codigo do produto [1 , 2 ,3 , 4]: ");

  scanf("%d", &codigo);

  switch (codigo)
  {
  case 1:
    printf("Alimento nao perecivel\n");
    break;
  case 2:
    printf("Alimento perecivel\n");
    break;
  case 3:
    printf("Higiene pessoal\n");
    break;
  case 4:
    printf("Material de limpeza\n");
    break;
  default:
    printf("Codigo invalido\n");
  }

  return 0;
}

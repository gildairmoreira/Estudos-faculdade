#include <stdio.h>

int main()
{
  int dia, mes, ano;
  int diasNoMes;

  printf("Digite uma data (dia mes ano): ");
  scanf("%d %d %d", &dia, &mes, &ano);

  if (mes < 1 || mes > 12)
  {
    printf("Data invalida: mes fora do intervalo 1-12.\n");
    return 1;
  }

  switch (mes)
  {
  case 2:
    if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0)))
    {
      diasNoMes = 29;
    }
    else
    {
      diasNoMes = 28;
    }
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    diasNoMes = 30;
    break;
  default:
    diasNoMes = 31;
    break;
  }

  if (dia < 1 || dia > diasNoMes)
  {
    printf("Data invalida: dia fora do intervalo valido para o mes %d.\n", mes);
    return 1;
  }

  printf("Data valida: %02d/%02d/%d\n", dia, mes, ano);
  return 0;
}

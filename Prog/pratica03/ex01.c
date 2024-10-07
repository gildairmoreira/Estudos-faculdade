#include <stdio.h>

int main()
{
  int i = 1;

  printf("Contando de 1 a 100 usando FOR:");
  for (int i = 1; i <= 100; i++)
  {
    printf("%d, ", i);
  }


  printf("\n\nContando de 1 a 100 usando WHILE:");
  while (i <= 100)
  {
    printf("%d, ", i);
    i++;
  }
  
  
  printf("\n\nContando de 1 a 100 usando DO-WHILE:");
  i = 1;
  do
  {
    printf("%d, ", i);
    i++;
  } while (i <= 100);
  
  return 0;
}

#include <stdio.h>

int main()
{
 float cont1, cont2, final=100;
 float  result = 0;

 for (cont1 = 1,cont2 = 1; cont1 < final; cont1 += 2, cont2++)
 {
  printf("%.2f / %.2f \n", cont1,cont2);
  result += (float)(cont1 / cont2);
 }
  printf("= %.2f\n", result);
  
  return 0;
}
#include <stdio.h>

int main()
{
  float distanciaKm, litrosGasolina;
  float consumoKmPorLitro;

  printf("Digite a distancia em Km: ");
  scanf("%f", &distanciaKm);

  printf("Digite a quantidade de litros de gasolina consumidos: ");
  scanf("%f", &litrosGasolina);

  consumoKmPorLitro = distanciaKm / litrosGasolina;

  if (consumoKmPorLitro < 8)
  {
    printf("Venda o Carro!\n");
  }
  else if (consumoKmPorLitro >= 8 && consumoKmPorLitro <= 12)
  {
    printf("Economico!\n");
  }
  else
  {
    printf("Super Economico!\n");
  }

  return 0;
}

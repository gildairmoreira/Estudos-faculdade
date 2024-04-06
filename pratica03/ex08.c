#include <stdio.h>

int main() {
    int numResidencias = 15;
    float precoKwh;
    float consumoTotal = 0;
    float maiorConsumo = 0, menorConsumo = 0;
    float consumo;

    printf("Digite o preço do Kwh: ");
    scanf("%f", &precoKwh);

    for (int i = 1; i <= numResidencias; i++) {
        printf("Digite o consumo da residencia %d (em Kwh): ", i);
        scanf("%f", &consumo);

        consumoTotal += consumo;

        if (i == 1 || consumo > maiorConsumo) {
            maiorConsumo = consumo;
        }
        if (i == 1 || consumo < menorConsumo) {
            menorConsumo = consumo;
        }
    }

    float consumoMedio = consumoTotal / numResidencias;

    printf("\nResultados da pesquisa:\n");
    printf("Consumo medio verificado: %.2f Kwh\n", consumoMedio);
    printf("Maior consumo verificado: %.2f Kwh\n", maiorConsumo);
    printf("Menor consumo verificado: %.2f Kwh\n", menorConsumo);

    float valorTotal = consumoTotal * precoKwh;
    printf("\nValor total gasto: R$ %.2f\n", valorTotal);

    return 0;
}

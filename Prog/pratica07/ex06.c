#include <stdio.h>

void avaliarConsumo(float distancia, float litros) {
    float consumo = distancia / litros;

    printf("Consumo: %.2f Km/l\n", consumo);

    if (consumo < 8) {
        printf("Mensagem: Venda o carro!\n");
    } else if (consumo >= 8 && consumo <= 12) {
        printf("Mensagem: Economico!\n");
    } else {
        printf("Mensagem: Super economico!\n");
    }
}

int main() {
    float distancia, litros;

    printf("Digite a distancia percorrida em Km: ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros de gasolina consumidos: ");
    scanf("%f", &litros);

    avaliarConsumo(distancia, litros);

    return 0;
}

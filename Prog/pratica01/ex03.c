#include <stdio.h>

int main()
{
    float a, b, c;
    float somaQuadrados;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    somaQuadrados = a * a + b * b + c * c;

    printf("A soma dos quadrados de A, B e C é %.1f\n", somaQuadrados);

    return 0;
}

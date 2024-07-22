#include <stdio.h>

// Função para calcular a raiz quadrada usando o método de Newton-Raphson
double raizQuadrada(double numero) {
    if (numero < 0) return -1; // Retorna -1 para números negativos
    double epsilon = 0.00001;  // Precisão desejada
    double estimativa = numero;
    while ((estimativa * estimativa - numero) > epsilon || (numero - estimativa * estimativa) > epsilon) {
        estimativa = (estimativa + (numero / estimativa)) / 2;
    }
    return estimativa;
}

int main() {
    int vet[10];
    int n = 10;
    double soma = 0, media, somaQuadrados = 0, desvioPadrao;

    // Leitura dos elementos do vetor
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vet[i]);
        soma += vet[i];  // Soma dos elementos para calcular a média
    }

    // Cálculo da média
    media = soma / n;

    // Cálculo da soma dos quadrados das diferenças em relação à média
    for (int i = 0; i < n; i++) {
        somaQuadrados += (vet[i] - media) * (vet[i] - media);
    }

    // Cálculo do desvio padrão
    desvioPadrao = raizQuadrada(somaQuadrados / (n - 1));

    // Impressão do desvio padrão
    printf("\nO desvio padrão dos elementos do vetor é: %.2f\n", desvioPadrao);

    return 0;
}

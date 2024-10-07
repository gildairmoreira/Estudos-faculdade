#include <stdio.h>
#include <math.h>

int main() {
    int vetor[10];
    double soma = 0.0, media, soma_diferencas_quadrado = 0.0, desvio_padrao;
    
    printf("Entre com os 10 valores do vetor: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    
    media = soma / 10;
    
    for (int i = 0; i < 10; i++) {
        soma_diferencas_quadrado += pow(vetor[i] - media, 2); //(vetor[i] - media) * (vetor[i] - media); //
    }
    
    desvio_padrao = sqrt(soma_diferencas_quadrado / 9);
    
    printf("Desvio Padrao = %.3f\n", desvio_padrao);
    
    return 0;
}

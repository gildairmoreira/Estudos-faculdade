#include <stdio.h>

void maiorEContagem(int arr[], int n, int *maior, int *contagem) {
    *maior = arr[0];
    *contagem = 1;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > *maior) {
            *maior = arr[i];
            *contagem = 1;
        } else if (arr[i] == *maior) {
            (*contagem)++;
        }
    }
}

int main() {
    int arr[] = {5, 2, 15, 3, 7, 15, 8, 6, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maior, contagem;
    
    maiorEContagem(arr, n, &maior, &contagem);
    
    printf("Maior elemento: %d\n", maior);
    printf("Numero de ocorrencias: %d\n", contagem);
    
    return 0;
}

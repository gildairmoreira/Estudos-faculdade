#include <stdio.h>

int negativos(float *vet, int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (vet[i] < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    float arr[] = {3.5, -2.1, 0.0, -7.8, 4.2, -5.0};
    int N = sizeof(arr) / sizeof(arr[0]);
    
    int num_negativos = negativos(arr, N);
    
    printf("Numero de valores negativos: %d\n", num_negativos);
    
    return 0;
}

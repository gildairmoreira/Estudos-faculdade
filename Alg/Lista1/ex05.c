#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2) {
    float delta = B * B - 4 * A * C;

    if (delta < 0) {
        return 0;
    } else if (delta == 0) {
        *X1 = -B / (2 * A);
        return 1;
    } else {
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2;
    }
}

int main() {
    float A, B, C, X1, X2;
    int num_raizes;
    
    scanf("%f %f %f", &A, &B, &C);
    
    if (A == 0) {
        printf("A deve ser diferente de zero.\n");
        return 1;
    }
    
    num_raizes = raizes(A, B, C, &X1, &X2);
    
    if (num_raizes == 0) {
        printf("Nao existem raizes reais.\n");
    } else if (num_raizes == 1) {
        printf("Existe uma raiz real: %.2f\n", X1);
    } else {
        printf("Existem duas raizes reais: %.2f e %.2f\n", X1, X2);
    }
    
    return 0;
}

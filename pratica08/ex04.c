#include <stdio.h>

struct Vetor {
    float x;
    float y;
    float z;
};

void soma(struct Vetor *v1, struct Vetor *v2, struct Vetor *res) {
    res->x = v1->x + v2->x;
    res->y = v1->y + v2->y;
    res->z = v1->z + v2->z;
}

int main() {
    struct Vetor v1 = {1.0, 2.0, 3.0};
    struct Vetor v2 = {4.0, 5.0, 6.0};
    struct Vetor resultado;

    soma(&v1, &v2, &resultado);

    printf("Resultado da soma dos vetores:\n");
    printf("x: %.2f, y: %.2f, z: %.2f\n", resultado.x, resultado.y, resultado.z);

    return 0;
}

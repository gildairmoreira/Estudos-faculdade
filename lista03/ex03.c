#include <stdio.h>

typedef struct{
    int x;
    int y;
}Ponto;

int dentroRet(Ponto *v1, Ponto *v2, Ponto *p) {
    if (p->x >= v1->x && p->x <= v2->x && p->y >= v1->y && p->y <= v2->y) {
        return 1;
    } else {
        return -1;
    }
}

int main() {
    Ponto v1, v2, p;

    printf("Digite as coordenadas do vertice inferior esquerdo (v1): ");
    scanf("%d %d", &v1.x, &v1.y);

    printf("Digite as coordenadas do vertice superior direito (v2): ");
    scanf("%d %d", &v2.x, &v2.y);

    printf("Digite as coordenadas do ponto (p): ");
    scanf("%d %d", &p.x, &p.y);

    int resultado = dentroRet(&v1, &v2, &p);

    if (resultado == 1) {
        printf("O ponto esta dentro do retangulo.\n");
    } else {
        printf("O ponto esta fora do retangulo.\n");
    }

    return 0;
}

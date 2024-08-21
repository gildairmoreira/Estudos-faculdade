#include <stdio.h>

struct Ponto {
    int x;
    int y;
};

// Função para verificar se um ponto está dentro de um retângulo
int dentroRet(struct Ponto *v1, struct Ponto *v2, struct Ponto *p) {
    // Verifica se o ponto p está dentro dos limites definidos pelos pontos v1 e v2
    if (p->x >= v1->x && p->x <= v2->x &&
        p->y >= v1->y && p->y <= v2->y) {
        return 1;  // Ponto está dentro do retângulo
    } else {
        return -1; // Ponto está fora do retângulo
    }
}

int main() {
    struct Ponto v1 = {0, 0};  // Inferior esquerdo do retângulo
    struct Ponto v2 = {10, 10}; // Superior direito do retângulo
    struct Ponto p = {5, 5};    // Ponto a ser testado

    int resultado = dentroRet(&v1, &v2, &p);
    if (resultado == 1) {
        printf("O ponto esta dentro do retangulo.\n");
    } else {
        printf("O ponto esta fora do retangulo.\n");
    }

    return 0;
}

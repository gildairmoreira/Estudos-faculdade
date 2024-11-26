#include <stdio.h>


typedef struct NO {
    int coeficiente; // coeficiente do termo
    int expoente;    // expoente do termo
    struct NO* prox; // ponteiro para o próximo nó
} NO;


NO* somaPolinomios(NO* P1, NO* P2) {
    NO* resultado = NULL; // Lista para armazenar o resultado
    NO** ptrResultado = &resultado; // Ponteiro para o último nó da lista

    while (P1 != NULL && P2 != NULL) {
        NO* novoNo = (NO*)malloc(sizeof(NO));

        if (P1->expoente > P2->expoente) {
            // Termo de P1 tem expoente maior
            novoNo->coeficiente = P1->coeficiente;
            novoNo->expoente = P1->expoente;
            P1 = P1->prox;
        } else if (P1->expoente < P2->expoente) {
            // Termo de P2 tem expoente maior
            novoNo->coeficiente = P2->coeficiente;
            novoNo->expoente = P2->expoente;
            P2 = P2->prox;
        } else {
            // Expoentes iguais, somamos os coeficientes
            novoNo->coeficiente = P1->coeficiente + P2->coeficiente;
            novoNo->expoente = P1->expoente;
            P1 = P1->prox;
            P2 = P2->prox;
        }

        novoNo->prox = NULL;
        *ptrResultado = novoNo;
        ptrResultado = &((*ptrResultado)->prox);
    }

    // Adiciona termos restantes de P1 ou P2
    while (P1 != NULL) {
        NO* novoNo = (NO*)malloc(sizeof(NO));
        novoNo->coeficiente = P1->coeficiente;
        novoNo->expoente = P1->expoente;
        novoNo->prox = NULL;
        *ptrResultado = novoNo;
        ptrResultado = &((*ptrResultado)->prox);
        P1 = P1->prox;
    }

    while (P2 != NULL) {
        NO* novoNo = (NO*)malloc(sizeof(NO));
        novoNo->coeficiente = P2->coeficiente;
        novoNo->expoente = P2->expoente;
        novoNo->prox = NULL;
        *ptrResultado = novoNo;
        ptrResultado = &((*ptrResultado)->prox);
        P2 = P2->prox;
    }

    return resultado;
}
#include <stdio.h>

int main() {
    double salario, prestacao;

    printf("Digite o salario do trabalhador: ");
    scanf("%lf", &salario);

    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%lf", &prestacao);

    double limitePrestacao = 0.2 * salario;

    if (prestacao > limitePrestacao) {
        printf("Emprestimo nao concedido.\n");
    } else {
        printf("Emprestimo concedido.\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char nome[51];
    int quantidade;
    float preco_venda;
} Produto;

int main() {
    int N;

    printf("Digite o numero de produtos: ");
    scanf("%d", &N);

    Produto *produtos = (Produto *)malloc(N * sizeof(Produto));

    if (produtos == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        printf("\nProduto %d\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);
        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);
        printf("Quantidade disponivel: ");
        scanf("%d", &produtos[i].quantidade);
        printf("Preco de venda: ");
        scanf("%f", &produtos[i].preco_venda);
    }

    Produto *produto_maior_preco = &produtos[0];
    Produto *produto_maior_quantidade = &produtos[0];

    for (int i = 1; i < N; i++) {
        if (produtos[i].preco_venda > produto_maior_preco->preco_venda) {
            produto_maior_preco = &produtos[i];
        }
        if (produtos[i].quantidade > produto_maior_quantidade->quantidade) {
            produto_maior_quantidade = &produtos[i];
        }
    }

    printf("\nProduto com maior preco de venda:\n");
    printf("Codigo: %d\n", produto_maior_preco->codigo);
    printf("Nome: %s\n", produto_maior_preco->nome);
    printf("Quantidade: %d\n", produto_maior_preco->quantidade);
    printf("Preco de venda: %.2f\n", produto_maior_preco->preco_venda);

    printf("\nProduto com maior quantidade disponivel:\n");
    printf("Codigo: %d\n", produto_maior_quantidade->codigo);
    printf("Nome: %s\n", produto_maior_quantidade->nome);
    printf("Quantidade: %d\n", produto_maior_quantidade->quantidade);
    printf("Preco de venda: %.2f\n", produto_maior_quantidade->preco_venda);

    free(produtos);

    return 0;
}

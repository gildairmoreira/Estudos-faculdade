#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100
#define MAX_NOME 50

typedef struct {
    int matricula;
    char nome[MAX_NOME];
    float nota_final;
} Aluno;

int main() {
    int N, L;
    Aluno alunos[MAX_ALUNOS];
    float soma_notas = 0, media;

    scanf("%d %d", &N, &L);

    for (int i = 0; i < N; i++) {
        scanf("%d", &alunos[i].matricula);
        getchar(); // Limpa o buffer
        fgets(alunos[i].nome, MAX_NOME, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = 0; // Remove o \n do final
        scanf("%f", &alunos[i].nota_final);
        soma_notas += alunos[i].nota_final;
    }

    media = soma_notas / N;

    printf("Matricula: %d\n", alunos[L-1].matricula);
    printf("Nome: %s\n", alunos[L-1].nome);
    printf("Nota Final: %.2f\n", alunos[L-1].nota_final);

    if (alunos[L-1].nota_final > media) {
        printf("ACIMA DA MEDIA\n");
    } else if (alunos[L-1].nota_final < media) {
        printf("ABAIXO DA MEDIA\n");
    } else {
        printf("NA MEDIA\n");
    }

    return 0;
}

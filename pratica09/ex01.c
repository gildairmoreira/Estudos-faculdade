#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char sobrenome[50];
    int anoNascimento;
} Aluno;

void imprimirAlunos(Aluno *alunos, int n) {
    if (n == 0) return;
    imprimirAlunos(alunos, n - 1);
    printf("Matricula: %d, Sobrenome: %s, Ano de Nascimento: %d\n", alunos[n - 1].matricula, alunos[n - 1].sobrenome, alunos[n - 1].anoNascimento);
}

int main() {
    int numAlunos;
    
    printf("Informe o numero de alunos: ");
    scanf("%d", &numAlunos);

    Aluno *alunos = (Aluno*) malloc(numAlunos * sizeof(Aluno));
    
    if (alunos == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < numAlunos; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Sobrenome: ");
        scanf("%s", alunos[i].sobrenome);
        printf("Ano de Nascimento: ");
        scanf("%d", &alunos[i].anoNascimento);
    }

    printf("\nDados dos alunos:\n");
    imprimirAlunos(alunos, numAlunos);

    free(alunos);

    return 0;
}

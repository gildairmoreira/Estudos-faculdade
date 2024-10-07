#include <stdio.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[100];
    float nota1;
    float nota2;
    float nota3;
} Aluno;

int main() {
    Aluno alunos[5];
    int i;
    float maiorNota1 = -1;
    float maiorMedia = -1;
    float menorMedia = 101;
    int indiceMaiorNota1 = 0;
    int indiceMaiorMedia = 0;
    int indiceMenorMedia = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        fflush(stdin);
        
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, 100, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = 0;
        
        printf("Digite a nota da primeira prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);
        
        printf("Digite a nota da segunda prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);
        
        printf("Digite a nota da terceira prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota3);
        
        printf("\n");
    }

    for (i = 0; i < 5; i++) {
        if (alunos[i].nota1 > maiorNota1) {
            maiorNota1 = alunos[i].nota1;
            indiceMaiorNota1 = i;
        }
    }

    for (i = 0; i < 5; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
        
        if (media > maiorMedia) {
            maiorMedia = media;
            indiceMaiorMedia = i;
        }
        
        if (media < menorMedia) {
            menorMedia = media;
            indiceMenorMedia = i;
        }
    }

    printf("Aluno com maior nota da primeira prova: %s\n", alunos[indiceMaiorNota1].nome);
    printf("Aluno com maior media geral: %s\n", alunos[indiceMaiorMedia].nome);
    printf("Aluno com menor media geral: %s\n", alunos[indiceMenorMedia].nome);

    for (i = 0; i < 5; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
        printf("%s: %s\n", alunos[i].nome, media >= 60.0 ? "Aprovado" : "Reprovado");
    }

    return 0;
}

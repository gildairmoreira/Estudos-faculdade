#include <stdio.h>

int main() {
    int matriz[5][4];
    int i;
    int matriculaMaiorNota;
    double maiorNota = -1;
    double somaNotasFinais = 0;

    printf("Digite as informacoes dos alunos (matricula, media_provas, media_trabalhos):\n");
    for (i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Numero de matricula: ");
        scanf("%d", &matriz[i][0]);
        printf("Media das provas: ");
        scanf("%lf", &matriz[i][1]);
        printf("Media dos trabalhos: ");
        scanf("%lf", &matriz[i][2]);
        
        matriz[i][3] = matriz[i][1] + matriz[i][2];
        
        somaNotasFinais += matriz[i][3];
        
        if (matriz[i][3] > maiorNota) {
            maiorNota = matriz[i][3];
            matriculaMaiorNota = matriz[i][0];
        }
    }

    printf("\nMatricula do aluno com a maior nota final: %d\n", matriculaMaiorNota);

    printf("Media aritmetica das notas finais: %.2f\n", somaNotasFinais / 5);

    return 0;
}

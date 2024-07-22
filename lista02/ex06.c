#include <stdio.h>

int main() {
    int matriz[5][4];
    int i;
    int matriculaMaiorNota;
    double maiorNota = -1;  // Inicializa com um valor menor que qualquer nota possível
    double somaNotasFinais = 0;

    // Leitura dos dados
    printf("Digite as informações dos alunos (matricula, media_provas, media_trabalhos):\n");
    for (i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Número de matrícula: ");
        scanf("%d", &matriz[i][0]);
        printf("Média das provas: ");
        scanf("%lf", &matriz[i][1]);
        printf("Média dos trabalhos: ");
        scanf("%lf", &matriz[i][2]);
        
        // Calcula a nota final
        matriz[i][3] = matriz[i][1] + matriz[i][2];
        
        // Acumula a soma das notas finais
        somaNotasFinais += matriz[i][3];
        
        // Verifica se a nota final atual é a maior
        if (matriz[i][3] > maiorNota) {
            maiorNota = matriz[i][3];
            matriculaMaiorNota = matriz[i][0];
        }
    }

    // Impressão da matrícula do aluno com a maior nota final
    printf("\nMatrícula do aluno com a maior nota final: %d\n", matriculaMaiorNota);

    // Impressão da média aritmética das notas finais
    printf("Média aritmética das notas finais: %.2f\n", somaNotasFinais / 5);

    return 0;
}

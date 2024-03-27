#include <stdio.h>

int main() {
    char sexo;
    int idade, tempoContribuicao;

    printf("Informe o sexo (M para masculino, F para feminino): ");
    scanf("%c", &sexo);

    printf("Informe a idade (em anos): ");
    scanf("%d", &idade);

    printf("Informe o tempo de contribuicao (em anos): ");
    scanf("%d", &tempoContribuicao);

    if ((sexo == 'M' || sexo == 'm') && tempoContribuicao >= 35) {
        printf("Voce tem direito a aposentadoria integral.\n");
    } else if ((sexo == 'F' || sexo == 'f') && tempoContribuicao >= 30) {
        printf("Voce tem direito a aposentadoria integral.\n");
    } else {
        if ((sexo == 'M' || sexo == 'm') && idade >= 65) {
            printf("Voce tem direito a aposentadoria por idade.\n");
        } else if ((sexo == 'F' || sexo == 'f') && idade >= 60) {
            printf("Voce tem direito a aposentadoria por idade.\n");
        } else {
            printf("Voce nao tem direito a aposentadoria.\n");
        }
    }

    return 0;
}

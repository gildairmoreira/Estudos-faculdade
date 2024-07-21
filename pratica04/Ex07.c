#include <stdio.h>
#include <string.h>

int main() {
    char primeiroNome[50];
    char ultimoNome[50];
    char nomeDoMeio[50];
    char nomeCompleto[150];

    printf("Digite seu primeiro nome: ");
    gets(primeiroNome);
    primeiroNome[strcspn(primeiroNome, "\n")] = '\0';

    printf("Digite seu nome do meio: ");
    gets(nomeDoMeio);
    nomeDoMeio[strcspn(nomeDoMeio, "\n")] = '\0';

    printf("Digite seu último nome: ");
    gets(ultimoNome);
    ultimoNome[strcspn(ultimoNome, "\n")] = '\0';

    strcpy(nomeCompleto, primeiroNome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, nomeDoMeio);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, ultimoNome);

    printf("Nome completo: %s\n", nomeCompleto);

    return 0;
}

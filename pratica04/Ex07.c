#include <stdio.h>
#include <string.h>

int main() {
    char primeiroNome[50];
    char ultimoNome[50];
    char nomeDoMeio[50];
    char nomeCompleto[150];  // Array para armazenar a concatenação

    printf("Digite seu primeiro nome: ");
    fgets(primeiroNome, sizeof(primeiroNome), stdin);
    primeiroNome[strcspn(primeiroNome, "\n")] = '\0'; // Remove a nova linha

    printf("Digite seu nome do meio: ");
    fgets(nomeDoMeio, sizeof(nomeDoMeio), stdin);
    nomeDoMeio[strcspn(nomeDoMeio, "\n")] = '\0'; // Remove a nova linha

    printf("Digite seu último nome: ");
    fgets(ultimoNome, sizeof(ultimoNome), stdin);
    ultimoNome[strcspn(ultimoNome, "\n")] = '\0'; // Remove a nova linha

    // Concatena as strings
    strcpy(nomeCompleto, primeiroNome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, nomeDoMeio);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, ultimoNome);

    printf("Nome completo: %s\n", nomeCompleto);

    return 0;
}

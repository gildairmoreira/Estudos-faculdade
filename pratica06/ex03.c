#include <stdio.h>
#include <string.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char rua[100];
    int numero;
    char cidade[100];
    char estado[3];
    char cep[10];
} Endereco;

typedef struct {
    char nome[100];
    char sexo[10];
    float peso;
    Data nascimento;
    Endereco endereco;
} Pessoa;

int main() {
    Pessoa pessoa;

    printf("Digite o nome: ");
    fgets(pessoa.nome, 100, stdin);
    pessoa.nome[strcspn(pessoa.nome, "\n")] = 0;

    printf("Digite o sexo: ");
    fgets(pessoa.sexo, 10, stdin);
    pessoa.sexo[strcspn(pessoa.sexo, "\n")] = 0;

    printf("Digite o peso: ");
    scanf("%f", &pessoa.peso);
    fflush(stdin);

    printf("Digite a data de nascimento (dia mes ano): ");
    scanf("%d %d %d", &pessoa.nascimento.dia, &pessoa.nascimento.mes, &pessoa.nascimento.ano);
    fflush(stdin);

    printf("Digite o nome da rua: ");
    fgets(pessoa.endereco.rua, 100, stdin);
    pessoa.endereco.rua[strcspn(pessoa.endereco.rua, "\n")] = 0;

    printf("Digite o numero: ");
    scanf("%d", &pessoa.endereco.numero);
    fflush(stdin);

    printf("Digite a cidade: ");
    fgets(pessoa.endereco.cidade, 100, stdin);
    pessoa.endereco.cidade[strcspn(pessoa.endereco.cidade, "\n")] = 0;

    printf("Digite o estado: ");
    fgets(pessoa.endereco.estado, 3, stdin);
    pessoa.endereco.estado[strcspn(pessoa.endereco.estado, "\n")] = 0;
    fflush(stdin);

    printf("Digite o CEP: ");
    fgets(pessoa.endereco.cep, 10, stdin);
    pessoa.endereco.cep[strcspn(pessoa.endereco.cep, "\n")] = 0;

    printf("\nNome: %s\n", pessoa.nome);
    printf("Sexo: %s\n", pessoa.sexo);
    printf("Peso: %.2f\n", pessoa.peso);
    printf("Data de nascimento: %d/%d/%d\n", pessoa.nascimento.dia, pessoa.nascimento.mes, pessoa.nascimento.ano);
    printf("Endereco: %s, %d, %s, %s, %s\n", pessoa.endereco.rua, pessoa.endereco.numero, pessoa.endereco.cidade, pessoa.endereco.estado, pessoa.endereco.cep);

    return 0;
}

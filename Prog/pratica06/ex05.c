#include <stdio.h>
#include <string.h>

typedef struct {
    char rua[20];
    char bairro[20];
    char cidade[20];
    char estado[3];
    char cep[10];
} Endereco;

typedef struct {
    char nome[20];
    Endereco endereco;
    float salario;
    int identidade;
    int cpf;
    char estadoCivil[20];
    int telefone;
    int idade;
    char sexo[10];
} Cadastro;

int main() {
    Cadastro cadastros[7];
    int i, identidadeBusca;
    int indiceMaiorIdade = 0;

    for (i = 0; i < 7; i++) {
        printf("Digite o nome do cadastro %d: ", i + 1);
        fgets(cadastros[i].nome, 20, stdin);
        cadastros[i].nome[strcspn(cadastros[i].nome, "\n")] = 0;

        printf("Digite a rua: ");
        fgets(cadastros[i].endereco.rua, 20, stdin);
        cadastros[i].endereco.rua[strcspn(cadastros[i].endereco.rua, "\n")] = 0;

        printf("Digite o bairro: ");
        fgets(cadastros[i].endereco.bairro, 20, stdin);
        cadastros[i].endereco.bairro[strcspn(cadastros[i].endereco.bairro, "\n")] = 0;

        printf("Digite a cidade: ");
        fgets(cadastros[i].endereco.cidade, 20, stdin);
        cadastros[i].endereco.cidade[strcspn(cadastros[i].endereco.cidade, "\n")] = 0;

        printf("Digite o estado: ");
        fgets(cadastros[i].endereco.estado, 3, stdin);
        cadastros[i].endereco.estado[strcspn(cadastros[i].endereco.estado, "\n")] = 0;
        fflush(stdin);

        printf("Digite o CEP: ");
        fgets(cadastros[i].endereco.cep, 10, stdin);
        cadastros[i].endereco.cep[strcspn(cadastros[i].endereco.cep, "\n")] = 0;

        printf("Digite o salario: ");
        scanf("%f", &cadastros[i].salario);
        
        printf("Digite a identidade: ");
        scanf("%d", &cadastros[i].identidade);
        
        printf("Digite o CPF: ");
        scanf("%d", &cadastros[i].cpf);
        fflush(stdin);

        printf("Digite o estado civil: ");
        fgets(cadastros[i].estadoCivil, 20, stdin);
        cadastros[i].estadoCivil[strcspn(cadastros[i].estadoCivil, "\n")] = 0;

        printf("Digite o telefone: ");
        scanf("%d", &cadastros[i].telefone);

        printf("Digite a idade: ");
        scanf("%d", &cadastros[i].idade);

        printf("Digite o sexo: ");
        fflush(stdin);
        fgets(cadastros[i].sexo, 10, stdin);
        cadastros[i].sexo[strcspn(cadastros[i].sexo, "\n")] = 0;

        printf("\n");
    }

    for (i = 1; i < 7; i++) {
        if (cadastros[i].idade > cadastros[indiceMaiorIdade].idade) {
            indiceMaiorIdade = i;
        }
    }
    printf("Pessoa com maior idade: %s\n", cadastros[indiceMaiorIdade].nome);

    printf("Pessoas do sexo masculino:\n");
    for (i = 0; i < 7; i++) {
        if (strcmp(cadastros[i].sexo, "Masculino") == 0) {
            printf("%s\n", cadastros[i].nome);
        }
    }

    printf("Pessoas com salario maior que 1000:\n");
    for (i = 0; i < 7; i++) {
        if (cadastros[i].salario > 1000) {
            printf("%s\n", cadastros[i].nome);
        }
    }

    printf("Digite a identidade a ser buscada: ");
    scanf("%d", &identidadeBusca);
    for (i = 0; i < 7; i++) {
        if (cadastros[i].identidade == identidadeBusca) {
            printf("Dados da pessoa com identidade %d:\n", identidadeBusca);
            printf("Nome: %s\n", cadastros[i].nome);
            printf("Endereco: %s, %s, %s, %s, %s\n", cadastros[i].endereco.rua, cadastros[i].endereco.bairro, cadastros[i].endereco.cidade, cadastros[i].endereco.estado, cadastros[i].endereco.cep);
            printf("Salario: %.2f\n", cadastros[i].salario);
            printf("CPF: %d\n", cadastros[i].cpf);
            printf("Estado Civil: %s\n", cadastros[i].estadoCivil);
            printf("Telefone: %d\n", cadastros[i].telefone);
            printf("Idade: %d\n", cadastros[i].idade);
            printf("Sexo: %s\n", cadastros[i].sexo);
            break;
        }
    }

    return 0;
}

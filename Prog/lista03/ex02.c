#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} DataAniversario;

typedef struct {
    int ddd;
    char numero[100];
} Telefone;

typedef struct {
    char rua[100];
    int numero;
    char complemento[100];
    char bairro[100];
    char cep[100];
    char cidade[100];
    char estado[100];
    char pais[100];
} Endereco;

typedef struct {
    char nome[100];
    char email[100];
    Endereco endereco;
    Telefone telefone;
    DataAniversario aniversario;
    char observacoes[100];
} Pessoa;

void menu(Pessoa agenda[], int *quantidade) {
    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Inserir contato\n");
        printf("2. Buscar por nome\n");
        printf("3. Buscar por mes de aniversario\n");
        printf("4. Buscar por dia e mes de aniversario\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();  

        switch (opcao) {
            case 1:
                inserirPessoa(agenda, quantidade);
                break;
            case 2: {
                char nome[100];
                printf("Digite o primeiro nome para buscar: ");
                fgets(nome, 100, stdin);
                nome[strcspn(nome, "\n")] = '\0';  
                buscarPorNome(agenda, *quantidade, nome);
                break;
            }
            case 3: {
                int mes;
                printf("Digite o mes de aniversario (1-12): ");
                scanf("%d", &mes);
                buscarPorMesAniversario(agenda, *quantidade, mes);
                break;
            }
            case 4: {
                int dia, mes;
                printf("Digite o dia de aniversario: ");
                scanf("%d", &dia);
                printf("Digite o mes de aniversario: ");
                scanf("%d", &mes);
                buscarPorDiaMesAniversario(agenda, *quantidade, dia, mes);
                break;
            }
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 5);
}

void inserirPessoa(Pessoa agenda[], int *quantidade) {
    if (*quantidade >= 100) {
        printf("Agenda cheia!\n");
        return;
    }

    Pessoa novaPessoa;
    printf("Digite o nome: ");
    fgets(novaPessoa.nome, 100, stdin);
    novaPessoa.nome[strcspn(novaPessoa.nome, "\n")] = '\0';

    printf("Digite o email: ");
    fgets(novaPessoa.email, 100, stdin);
    novaPessoa.email[strcspn(novaPessoa.email, "\n")] = '\0';

    printf("Digite o endereco (rua, numero, complemento, bairro, cep, cidade, estado, pais):\n");
    printf("Rua: ");
    fgets(novaPessoa.endereco.rua, 100, stdin);
    novaPessoa.endereco.rua[strcspn(novaPessoa.endereco.rua, "\n")] = '\0';

    printf("Numero: ");
    scanf("%d", &novaPessoa.endereco.numero);
    getchar();  

    printf("Complemento: ");
    fgets(novaPessoa.endereco.complemento, 100, stdin);
    novaPessoa.endereco.complemento[strcspn(novaPessoa.endereco.complemento, "\n")] = '\0';

    printf("Bairro: ");
    fgets(novaPessoa.endereco.bairro, 100, stdin);
    novaPessoa.endereco.bairro[strcspn(novaPessoa.endereco.bairro, "\n")] = '\0';

    printf("CEP: ");
    fgets(novaPessoa.endereco.cep, 100, stdin);
    novaPessoa.endereco.cep[strcspn(novaPessoa.endereco.cep, "\n")] = '\0';

    printf("Cidade: ");
    fgets(novaPessoa.endereco.cidade, 100, stdin);
    novaPessoa.endereco.cidade[strcspn(novaPessoa.endereco.cidade, "\n")] = '\0';

    printf("Estado: ");
    fgets(novaPessoa.endereco.estado, 100, stdin);
    novaPessoa.endereco.estado[strcspn(novaPessoa.endereco.estado, "\n")] = '\0';

    printf("Pais: ");
    fgets(novaPessoa.endereco.pais, 100, stdin);
    novaPessoa.endereco.pais[strcspn(novaPessoa.endereco.pais, "\n")] = '\0';

    printf("Digite o telefone (DDD e numero):\n");
    printf("DDD: ");
    scanf("%d", &novaPessoa.telefone.ddd);
    getchar();  

    printf("Numero: ");
    fgets(novaPessoa.telefone.numero, 100, stdin);
    novaPessoa.telefone.numero[strcspn(novaPessoa.telefone.numero, "\n")] = '\0';

    printf("Digite a data de aniversario (dia mes ano): ");
    scanf("%d %d %d", &novaPessoa.aniversario.dia, &novaPessoa.aniversario.mes, &novaPessoa.aniversario.ano);
    getchar();  

    printf("Digite observacoes: ");
    fgets(novaPessoa.observacoes, 100, stdin);
    novaPessoa.observacoes[strcspn(novaPessoa.observacoes, "\n")] = '\0';

    
    agenda[*quantidade] = novaPessoa;
    (*quantidade)++;

    ordenarAgenda(agenda, *quantidade);

    printf("Contato inserido com sucesso!\n");
}

void ordenarAgenda(Pessoa agenda[], int quantidade) {
    for (int i = 1; i < quantidade; i++) {
        Pessoa temp = agenda[i];
        int j = i - 1;
        while (j >= 0 && strcmp(agenda[j].nome, temp.nome) > 0) {
            agenda[j + 1] = agenda[j];
            j--;
        }
        agenda[j + 1] = temp;
    }
}

void buscarPorNome(Pessoa agenda[], int quantidade, const char *nome) {
    int encontrado = 0;
    for (int i = 0; i < quantidade; i++) {
        if (strstr(agenda[i].nome, nome) != NULL) {
            imprimirPessoa(&agenda[i]);
            encontrado = 1;
        }
    }
    if (!encontrado) {
        printf("Nenhum contato encontrado com o nome %s.\n", nome);
    }
}

void buscarPorMesAniversario(Pessoa agenda[], int quantidade, int mes) {
    int encontrado = 0;
    for (int i = 0; i < quantidade; i++) {
        if (agenda[i].aniversario.mes == mes) {
            imprimirPessoa(&agenda[i]);
            encontrado = 1;
        }
    }
    if (!encontrado) {
        printf("Nenhum contato encontrado com aniversario no mes %d.\n", mes);
    }
}

void buscarPorDiaMesAniversario(Pessoa agenda[], int quantidade, int dia, int mes) {
    int encontrado = 0;
    for (int i = 0; i < quantidade; i++) {
        if (agenda[i].aniversario.dia == dia && agenda[i].aniversario.mes == mes) {
            imprimirPessoa(&agenda[i]);
            encontrado = 1;
        }
    }
    if (!encontrado) {
        printf("Nenhum contato encontrado com aniversario no dia %d/%d.\n", dia, mes);
    }
}

void imprimirPessoa(const Pessoa *pessoa) {
    printf("\nNome: %s\n", pessoa->nome);
    printf("Email: %s\n", pessoa->email);
    printf("Endereco: %s, %d, %s, %s, %s, %s, %s, %s\n", 
           pessoa->endereco.rua, pessoa->endereco.numero, pessoa->endereco.complemento, 
           pessoa->endereco.bairro, pessoa->endereco.cep, pessoa->endereco.cidade, 
           pessoa->endereco.estado, pessoa->endereco.pais);
    printf("Telefone: (%d) %s\n", pessoa->telefone.ddd, pessoa->telefone.numero);
    printf("Aniversario: %02d/%02d/%04d\n", pessoa->aniversario.dia, 
           pessoa->aniversario.mes, pessoa->aniversario.ano);
    printf("Observacoes: %s\n", pessoa->observacoes);
}

int main() {
    Pessoa agenda[100];
    int quantidade = 0;

    menu(agenda, &quantidade);

    return 0;
}

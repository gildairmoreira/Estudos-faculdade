#include <stdio.h>
#include <string.h>

typedef struct sEndereco
{
    char rua[21];
    char cidade[21];
    char estado[4];
    int numeroCasa;
    int cep;
} Endereco;

int main()
{
    Endereco enderecoUser;

    printf("Digite o nome da rua (max 20 caracteres): ");
    fgets(enderecoUser.rua, 21, stdin);
    enderecoUser.rua[strcspn(enderecoUser.rua, "\n")] = 0;

    printf("Digite o numero: ");
    scanf("%d", &enderecoUser.numeroCasa);
    enderecoUser.numeroCasa[strcspn(enderecoUser.numeroCasa, "\n")] = 0;

    printf("Digite o nome da cidade (max 20 caracteres): ");
    fgets(enderecoUser.cidade, 21, stdin);
    enderecoUser.cidade[strcspn(enderecoUser.cidade, "\n")] = 0;

    printf("Digite o estado (max 3 caracteres): ");
    fgets(enderecoUser.estado, 4, stdin);
    enderecoUser.estado[strcspn(enderecoUser.estado, "\n")] = 0;

    printf("Digite o CEP: ");
    scanf("%d", &enderecoUser.cep);

    printf("%s %d %s\n%s %d\n", enderecoUser.rua, enderecoUser.numeroCasa, enderecoUser.cidade, enderecoUser.estado, enderecoUser.cep);

    return 0;
}

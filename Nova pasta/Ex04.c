#include <stdio.h>

// Função para verificar se um caractere é uma vogal
int ehVogal(char c) {
    char vogais[] = "aeiouAEIOU";
    for (int i = 0; i < 10; i++) {
        if (c == vogais[i]) {
            return 1;
        }
    }
    return 0;
}

// Função para verificar se um caractere é uma consoante
int ehConsoante(char c) {
    // Verifica se é uma letra do alfabeto e não é uma vogal
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return !ehVogal(c);
    }
    return 0;
}

int main() {
    char str[100]; // Assume que a string terá no máximo 100 caracteres
    int vogais = 0, consoantes = 0;

    // Leitura da string
    printf("Digite uma string de pelo menos 10 caracteres: ");
    fgets(str, sizeof(str), stdin);

    // Verificar se a string tem pelo menos 10 caracteres
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    if (length < 10) {
        printf("String muito curta. Programa finalizado.\n");
        return 1;
    }

    // Contagem de vogais e consoantes
    for (int i = 0; i < length; i++) {
        if (ehVogal(str[i])) {
            vogais++;
        } else if (ehConsoante(str[i])) {
            consoantes++;
        }
    }

    // Exibição dos resultados
    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);

    return 0;
}

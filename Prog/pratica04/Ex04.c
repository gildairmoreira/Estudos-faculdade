#include <stdio.h>

int ehVogal(char c) {
    char vogais[] = "aeiouAEIOU";
    for (int i = 0; i < 10; i++) {
        if (c == vogais[i]) {
            return 1;
        }
    }
    return 0;
}

int ehConsoante(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return !ehVogal(c);
    }
    return 0;
}

int main() {
    char str[100];
    int vogais = 0, consoantes = 0;

    printf("Digite uma string de pelo menos 10 caracteres: ");
    gets(str);

    int tamanhoStr = 0;
    while (str[tamanhoStr] != '\0' && str[tamanhoStr] != '\n') {
        tamanhoStr++;
    }

    if (tamanhoStr < 10) {
        printf("String muito curta. Programa finalizado.\n");
        return 1;
    }

    for (int i = 0; i < tamanhoStr; i++) {
        if (ehVogal(str[i])) {
            vogais++;
        } else if (ehConsoante(str[i])) {
            consoantes++;
        }
    }

    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* alocarString(int tamanho) {
    return (char*)malloc(tamanho * sizeof(char));
}

void removerVogais(char* str) {
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}

int main() {
    int tamanho;
    
    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);

    char* str = alocarString(tamanho + 1);
    
    if (str == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("Digite o conteudo da string: ");
    scanf(" %[^\n]", str);

    printf("String sem vogais: ");
    removerVogais(str);

    free(str);

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define caracteresTotal 255

void contarCaracteres(const char *texto) {

    int frequencia[256] = {0};
    int linha;

    for (linha = 0; linha < strlen(texto); linha++) {
        frequencia[(unsigned char)tolower(texto[linha])]++;
    }
}

int main() {
    
    char texto[caracteresTotal];

    printf("Digite um texto: ");
    scanf("%s", texto);

    contarCaracteres(texto);

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define caracteresTotal 100

void contarCaracteres(const char *texto) {

    int frequencia[256] = {0};
    int linha;

    for (linha = 0; linha < strlen(texto); linha++) {
        frequencia[(unsigned char)tolower(texto[linha])]++;
    }

    printf("Os três caracteres mais frequentes:\n");
    for (linha = 0; linha < 3; linha++) {
        int frequenciaMaxima = 0;
        char quantidadeMaxima = '\0';

        for (int quantidade = 0; quantidade < 256; quantidade++) {
            if (frequencia[quantidade] > frequenciaMaxima) {
                frequenciaMaxima = frequencia[quantidade];
                quantidadeMaxima = (char)quantidade;
            }
        }

        if (quantidadeMaxima != '\0') {
            printf("'%c' aparece %d vezes\n", quantidadeMaxima, frequenciaMaxima);
            frequencia[quantidadeMaxima] = 0;
        }
    }

    printf("\nOs três caracteres menos frequentes:\n");
    for (linha = 0; linha < 3; linha++) {
        int frequenciaMinima = caracteresTotal + 1;
        char quantidadeMinima = '\0';

        for (int quantidade = 0; quantidade < 256; quantidade++) {
            if (frequencia[quantidade] > 0 && frequencia[quantidade] < frequenciaMinima) {
                frequenciaMinima = frequencia[quantidade];
                quantidadeMinima = (char)quantidade;
            }
        }

        if (quantidadeMinima != '\0') {
            printf("'%c' aparece %d vezes\n", quantidadeMinima, frequenciaMinima);
            frequencia[quantidadeMinima] = caracteresTotal + 1;
        }
    }
}

int main() {
    
    char texto[caracteresTotal];

    printf("Digite um texto: ");
    gets(texto);

    //scanf lê apenas até o primeiro espaço em branco nao uma linha completa

    contarCaracteres(texto);

    return 0;
}
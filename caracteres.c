#include <stdio.h>
#include <string.h>

int contarCaracteres(char *texto) {
    int tamanho = strlen(texto);
    return tamanho;
}

int main() {
    char texto[200];
    printf("Digite um texto: ");
    scanf("%s", texto);

    int quantidade = contarCaracteres(texto);
    printf("O texto tem %d caracteres.\n", quantidade);

    return 0;
}
#include <stdio.h>
#include <string.h>

int caracteres(char texto);

int main() {
    
    char texto[500];
    
    printf("Digite um texto: ");
    scanf("%s", texto);
    
    caracteres(texto);
    
    
}

void caracteres(char *texto) {
    
    int linha;
    int tamanho = strlen(texto);
    
    int quantidade = contarCaracteres(texto);
    printf("O texto tem %d caracteres.\n", quantidade);

    return tamanho;
    for (linha = 0; linha < strlen(texto); linha++) {
        
    }
}
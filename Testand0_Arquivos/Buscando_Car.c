#include <stdio.h>
#include <stdlib.h>

int buscarCar(char *str, char c, int posicao_atual){
    if (*str == '\0'){
        printf("Comparação: Fim da string, caractere não encontrado.\n");
        return -1; // O caractere não foi encontrado na string
    }
    if (*str == c){
        printf("Comparação: Encontrado '%c' na posição %d da string.\n", c, posicao_atual);
        return posicao_atual; // Caractere encontrado; retorna a posição atual
    }
    printf("Comparação: '%c' != '%c' (posição %d)\n", *str, c, posicao_atual);
    return buscarCar(str + 1, c, posicao_atual + 1); // Continue a busca recursivamente
}

int main() {
    char palavra[] = "exemplo";
    char letra = 'm';
    int posicao_encontrada = buscarCar(palavra, letra, 0);

    if (posicao_encontrada != -1) {
        printf("O caractere '%c' foi encontrado na posição %d da string.\n", letra, posicao_encontrada);
    } else {
        printf("O caractere '%c' não foi encontrado na string.\n", letra);
    }

    return 0;
}

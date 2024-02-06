#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere; // Use int para armazenar o valor retornado por fgetc

    // Abra o arquivo em modo de leitura
    arquivo = fopen("/home/eduardo/Documents/Eda/Testand0_Arquivos/seuarquivo.txt", "r");

    // Verifique se o arquivo foi aberto com sucesso
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Leia e imprima cada caractere do arquivo
    while ((caractere = fgetc(arquivo)) != EOF) { // Correção aqui
        printf("%c", caractere);
    }

    // Feche o arquivo
    fclose(arquivo);

    return 0;
}


//FGETC - Lê um caractere do arquivo
//Sintaxe: int fgetc(FILE *fp);
//Parâmetros:
//fp: ponteiro para o arquivo
//Retorno: o caractere lido ou EOF se o final do arquivo for atingido ou se ocorrer um erro


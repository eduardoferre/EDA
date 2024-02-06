#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long retorno_bytes(char *NC, int R){
    long r;
    FILE *A = fopen("Saida.txt", "w");
    for(int i = 0; i < R; i++) fprintf(A, "%s", NC);
    fclose(A);

    A = fopen("Saida.txt", "r");
    fseek(A, 0, SEEK_END);
    r = ftell(A);
    fclose(A);
    remove("Saida.txt");

    return r;
}

int main(){

    char NC[30];
    int pos = 5;

    printf("Digite seu nome: ");
    scanf("%s", NC);
    int retorno = retorno_bytes(NC, pos);
    printf("O arquivo Saida.txt possui %d bytes\n", retorno);

    return 0;
}
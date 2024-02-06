// ESCREVA UM PROGRAMA QUE LEIA UM ARQUIVO E CONTE QUANTOS CARACTERES, ESPAÇOS, TABULAÇÕES E LINHAS EXISTEM NESTE ARQUIVO.
// USEI FGETC PARA LE TODOS OS CARACTERES PERTECENTES AO ARQUIVO QUE FOI LIDO
#include <stdio.h>


int main (){

    FILE *document;
    document = fopen("/home/eduardo/Documents/Eda/Testand0_Arquivos/seuarquivo.txt", "r");
    
    if(document == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char character;
    int i = 0;

    while ((character = fgetc(document)) != EOF){
        i++;
    }

    printf("O arquivo tem %d caracteres.\n", i);

    fclose(document);
    return 0;
}
/* FPUTC - Escreve um caractere em um arquivo
    int fputc(int caractere, FILE *ponteiro_arquivo);
    Retorna o caractere escrito em caso de sucesso e EOF em caso de erro.
*/

/* QUESTAO -  A FIle-copy Program
 Write a program that create a copy of a file. The user input two file names
   - the nameof file to be copied and the name of the output file.
*/


#include <stdio.h>


int main(){

    FILE *document_ori;
    FILE *document_dest;

    document_ori = fopen("/home/eduardo/Documents/Eda/Testand0_Arquivos/seuarquivo.txt", "r");
    if(document_ori == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    document_dest = fopen("/home/eduardo/Documents/Eda/Testand0_Arquivos/seuarquivo2.txt", "w");
    if(document_dest == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char character;

    while((character = fgetc(document_ori)) != EOF){
        fputc(character, document_dest);
    }

    fclose(document_ori);
    fclose(document_dest);
    return 0;
}
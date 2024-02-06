#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Verifica(char c){
    return (c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u');
}

int verifica_vg(char *NC, char L, int pos){
    if (NC[0] == '\0' || pos < 0 || pos >= strlen(NC)-1){
        return -1;
    }
    if (NC[pos]==L && Verifica(NC[pos+1])){
        return pos;
    }
    return verifica_vg(NC, L, pos+1);
}


int main(){

    char NM[30], L;
    int pos = 0;

    printf("Digite seu nome: ");
    scanf("%s", NM);
    printf("Digite uma letra: ");
    scanf(" %c", &L);
    int posicao = verifica_vg(NM, L, pos);
    if (posicao == -1){
        printf("Nao existe vogal apos a letra %c\n", L);
    }
    else{
        printf("Posicao onde se encontra o primeiro %c antecedendo uma consoante: %d\n", L, posicao);
    }



    return 0;
}
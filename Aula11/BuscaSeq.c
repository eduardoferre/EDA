#include <stdio.h>
#include <string.h>

int BuscaSequencialDesordenada(int *vetor, int n, int chave){
    int p;
    int posic = -1;

    for(p = 0; p < n; p++){
        if(chave == vetor[p]){
            posic = p;
            break;
        }
    }
    return posic;
}

int BuscaSequencialOrdenada(int *vetor, int n, int chave){
    int p = 0;
    int posic = -1;
    while(p < n && chave <= vetor[p]){
        if(vetor[p] == chave){
            posic = p;
            break;
        }
        p++;
    }
    return posic;
}






int main(){


    int vetor[] = {54,0,77,88,99,100,123,66,144,66,166};
    int tamanho = 11;
    int valor = 66;

    int resultado = BuscaSequencialDesordenada(vetor, tamanho, valor);
    printf("Resultado da posicao onde esta %d : %d", valor, resultado);
    //Tendo um vetor desordenado e fazendo a busca sequencial, caso o valor esteja se repetindo ira retornar a ultima posicao de onde se encontra a chave desejada
    //Adicionei um break na linha 11, no caso quando encontrar o primeiro valor desejado, ira retornar essa posicao e nao percorrera mais o laço de repetição


    int vetor1[] = {54,0,77,88,99,100,123,66,144,66,166};
    int tamanho1 = 11;
    int valor1 = 66;

    int resultado1 = BuscaSequencialOrdenada(vetor1, tamanho1, valor1);
    printf("Resultado da posicao onde esta %d : %d", valor1, resultado1);








    return 0;
}
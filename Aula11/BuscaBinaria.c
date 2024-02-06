#include <stdio.h>
#include <string.h>


int BuscaBinaria(int *vetor, int tamanho, int valor){
    int inicio = 0;
    int final = tamanho - 1;
    int meio;

    while (final >= inicio)
    {
        meio = (inicio+final)/2;
        if(valor > vetor[meio]){
            inicio =  meio + 1; 
        }
        else if(valor < vetor[meio]){
            final = meio - 1;
        }
        else{
            return meio;
        }
    }
    return -1;
}

int main(){

    int vetor[] = {54,66,77,88,99,100,123,144,155,166};
    int tamanho = 10;
    int valor = 66;

    int resultado = BuscaBinaria(vetor, tamanho, valor);
    printf("Resultado da posicao onde esta %d : %d", valor, resultado);

    return 0;
}
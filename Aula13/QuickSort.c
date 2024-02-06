#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void QuickSort(int *vetor, int tamanho){
    int pivo = vetor[0];
    int inicio = 0;
    int fim = tamanho - 1;

    while(fim > inicio){
        while(vetor[inicio] < pivo){
            inicio++;
        }
        while(vetor[fim] > pivo){
            fim--;
        }
        if(inicio < fim){
            int aux = vetor[inicio];
            vetor[inicio] = vetor[fim];
            vetor[fim] = aux;
        }


        if(fim > inicio){
            QuickSort(vetor, fim);
        }
        if(inicio < fim){
            QuickSort(vetor, tamanho - inicio);
        }

    }
}



int fatorial(int n){
    if(n == 1) return 1;
    return n * fatorial(n-1);
}




int main(){

    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int *vetor = (int *)malloc(tamanho * sizeof(int));

    for(int i = 0; i < tamanho; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }


    QuickSort(vetor, tamanho);


    for(int i = 0; i < tamanho; i++){
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
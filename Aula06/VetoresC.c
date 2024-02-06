#include <stdio.h>
#include <stdlib.h>


int *criarVetInt(int tamanho){
    int *vetor;
    vetor = malloc(tamanho * sizeof(int));
    return vetor;
}


float *criarVetFLoat(float tamanho){
    float *vetor;
    vetor = malloc(tamanho * sizeof(float));
    return vetor;
}

int main(){
    
    int *vetor = criarVetInt(10);
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    vetor[5] = 60;
    vetor[6] = 70;
    vetor[7] = 80;
    vetor[8] = 90;
    vetor[9] = 100;
    printf("criarVetInt(10) = %p\n", vetor);
    printf("vetor[0] = %d\n", vetor[0]);
    printf("vetor[1] = %d\n", vetor[1]);
    printf("vetor[2] = %d\n", vetor[2]);
    printf("vetor[3] = %d\n", vetor[3]);
    printf("vetor[4] = %d\n", vetor[4]);
    printf("vetor[5] = %d\n", vetor[5]);
    printf("vetor[6] = %d\n", vetor[6]);
    printf("vetor[7] = %d\n", vetor[7]);
    printf("vetor[8] = %d\n", vetor[8]);
    printf("vetor[9] = %d\n", vetor[9]);




    return 0;
}
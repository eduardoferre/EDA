#include <stdio.h>
#include <stdlib.h>


int main(){
    //Exemplo de alocação e desalocação de memória de dois vetores  
    int *Vet1, *Vet2;
    Vet1 = (int*) malloc (100*sizeof(int));
    Vet2 = (int*) calloc (100, sizeof(int));
    free (Vet1);
    free (Vet2);
    
    return 0;
}

//Tipo do dado = tipo do dado *nome = (tipo do dado *) malloc(sizeof(tipo do dado) * tamanho);
//Exemplo: int *vetor = (int *) malloc(sizeof(int) * 10);   
//Exemplo: float *vetor = (float *) malloc(sizeof(float) * 10);
// retorna um ponteiro void que iremos trabalhar com o tipo de dado que queremos

//Retorna um void, ou seja, um ponteiro generico

//calloc diferente do malloc coloca 0 em todas as posições do vetor
//ipo do dado * nome = (tipo do dado *) calloc (tamanho, sizeof(tipo do dado));
//Exemplo: int *vetor = (int *) calloc (10, sizeof(int));
//Exemplo: float *vetor = (float *) calloc (10, sizeof(float));


//free(vetor); //libera o espaço de memoria alocado para o vetor(ponteiro)
//free recebe qualquer ponteiro, e o ponteiro que recebe é o pomteiro que foi alocado com malloc ou calloc
//Exemplo: free(vetor);
//Exemplo: free(ptr);
//Ou seja, ele desaloca a memória
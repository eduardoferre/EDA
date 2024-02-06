#include <stdio.h>
#include <stdlib.h>
#include "VetoresC.c"



int incluVet(float *pvalores, float pv, int pcapacidade, int *ptamanho){
    



    *ptamanho++;

}

int main(){
    float *nums;
    int tammax = 10, qtde = 0;
    nums = criarVetFLoat(10);
    incluVet(nums, 6.9, tammax, &qtde);
    incluVet(nums, 10.0, tammax, &qtde);
    incluVet(nums, 0.7, tammax, &qtde);
    incluVet(nums, 106.8, tammax, &qtde);
    incluVet(nums, 46.9, tammax, &qtde);
    incluVet(nums, 190.0, tammax, &qtde);
    
 

    return 0;
}
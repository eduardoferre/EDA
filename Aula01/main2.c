#include <stdio.h>

int primo(int n){
    int i;
    for(i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}


int main(){

    int n;

    printf("\t\tVerificador de números primos\n\n");

    printf("Digite um número: ");
    scanf("%d", &n);

    if(primo(n)){
        printf("O número %d é primo!\n\n", n);
    }
    
    else{
        printf("O número %d não é primo!\n\n", n);
    } 

    return 0;
}
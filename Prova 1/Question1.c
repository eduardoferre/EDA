//QUESTAO 1 DA PROVA1 - TENDO COMO ENTRADA SUA MATRICULA, E FAZER A SOMA DE TODOS OS ALGARISMOS IMPARES QUE ESTÃO NELA, DE ACORDO COM A QUANTIDADE, SENDO ESSA QUANTIDADE O ULTIMO DIGITO DA SUA MATRICULA
#include <stdio.h>
#include <stdlib.h>

int retorne_soma(int valor){
    int *ptr,*pnumeros;
    int pn = valor % 10;
    int pp, psoma = 0;

    if(pn < 2) pn = 5 - pn; 
    pnumeros = (int *)malloc(pn * sizeof(int));
    ptr = pnumeros;

    for(pp = 0; pp < pn; pp++){
        *ptr = valor % 10;
        valor /= 10;
        ptr++;
    }
    for(pp = 0; pp < pn; pp++){
        if(pnumeros[pp]%2 == 1){
            psoma += pnumeros[pp];
        }
    }

    return psoma;
}

int main(){

    int valor, soma;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    soma = retorne_soma(valor);
    printf("A soma dos digitos impares e: %d\n", soma);

    return 0;
}
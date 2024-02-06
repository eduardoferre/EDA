#include <stdio.h>

void trocarValores(float *a, float *b){
    float aux;
    aux = *a;
    *a = *b;
    *b = aux;
}


int main()
{
    float a = 3.14;
    float b = 2.71;

    printf("Antes da troca:\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);

    trocarValores(&a, &b);
    printf("Depois da troca:\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);

    return 0;


    // Ponteito pode ser reconhecido como parameetro por referencia, ou seja, não estamos passadno os valores e sim o endereço. Sendo assim, mesmo utiliando a função uma vez, alterrá as variaveis  globais.
}
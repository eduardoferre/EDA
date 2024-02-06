#include <stdio.h>


int main() {

    int numero;
    numero = 79417;

    //Valor de 'numero'
    printf("Valor: %d\n", numero);

    //Endereço de 'numero'
    printf("Endereço: %p\n", &numero); //Letra E comercial, usada para demonstração do endereço de memoria
    //%p pointer - usado para demonstrar o endereço, sendo retornado um hexadecimal

    int *ptr;

    ptr = &numero;

    printf("Endereço da memória: %p", ptr);

return 0;
}
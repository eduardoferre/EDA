#include <stdio.h>
#include <stdlib.h>

float fahr_cel(float fahr){
    float cel = (fahr - 32) * 5 / 9;
    return cel;
}

float cel_fahr(float cel){
    float fahr = (cel * 9 / 5) + 32;
    return fahr;
}


int main(){

    printf("\t\tConversor de temperatura\n\n");
    printf("F - Converter de Celsius para Fahrenheit\n");
    printf("C - Converter de Fahrenheit para Celsius\n");
    printf("S - Sair\n\n");

    char op;
    printf("Digite a opção desejada: ");
    scanf(" %c", &op);

    switch(op){
        case 'F':
            float cel;
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &cel);
            printf("A temperatura em Fahrenheit é: %.2f\n\n", cel_fahr(cel));
            break;
        case 'C':
            float fahr;
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &fahr);
            printf("A temperatura em Celsius é: %.2f\n\n", fahr_cel(fahr));
            break;
        case 'S':
            system("clear");
            break;
        default:
            printf("Opção inválida!\n\n");
    }    

    return 0;
}
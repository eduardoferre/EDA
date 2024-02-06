#include <stdio.h>
#include <stdlib.h>

float soma(float a, float b){
    float soma = a + b;
    return soma;
}

float subtracao(float a, float b){
    float subtracao = a - b;
    return subtracao;
}

float multiplicacao(float a, float b){
    float multiplicacao = a * b;
    return multiplicacao;
}

float divisao(float a, float b){
    float divisao = a / b;
    return divisao;
}

int main(){

    float a, b;
    char op;
    char dec;

    printf("\t\tCalculadora\n\n");

    do{
    
    printf("1 - Soma(+)\n");
    printf("2 - Subtração(-)\n");
    printf("3 - Multiplicação(*)\n");
    printf("4 - Divisão(/)\n\n");
    printf("Digite o operador: ");
    scanf(" %c", &op);
    
    system("clear");

    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);

    switch (op){
        case '+':
            printf("A soma é: %.2f\n\n", soma(a, b));
            break;
        case '-':
            printf("A subtração é: %.2f\n\n", subtracao(a, b));
            break;
        case '*':
            printf("A multiplicação é: %.2f\n\n", multiplicacao(a, b));
            break;
        case '/':
            printf("A divisão é: %.2f\n\n", divisao(a, b));
            break;
        default:    
            printf("Operador inválido!\n");      
    }


    printf("Deseja continuar? (S/N): ");
    scanf(" %c", &dec);
    if(dec=='S') system("clear");
    printf("\n");
    }while(dec == 'S');


    return 0;
}
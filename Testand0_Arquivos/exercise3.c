/*  FPRINTF 
Usando uma Struct, na qual o usuário entre com os dados necessários e o programa escreve em um arquivo. Usando um fprintf,
forma de saída de dados em arquivos, já formatada
*/


#include <stdio.h>

struct Empregador
{
    char nome[50];
    int idade;
    float salario;
};

typedef struct Empregador Empregador;


int main(){

    Empregador empregador1;
    printf("Digite o nome do empregador: ");
    scanf("%s", empregador1.nome);
    printf("Digite a idade do empregador: ");
    scanf("%d", &empregador1.idade);
    printf("Digite o salario do empregador: ");
    scanf("%f", &empregador1.salario);

    FILE *file1;
    file1 = fopen("/home/eduardo/Documents/Eda/Testand0_Arquivos/struct.txt", "w");
    if(file1 == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(file1, "Nome do Empregador: %s\n", empregador1.nome);
    fprintf(file1, "Idade do Empregador: %d\n", empregador1.idade);
    fprintf(file1, "Salario do Empregador: %.2f\n", empregador1.salario);


    fclose(file1);
    return 0;
}
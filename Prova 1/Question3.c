#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *retorn_mat_nm(int *M, char *NC){
    int n;
    char *code = (char *)malloc(9 * sizeof(char));

    for(int i = 0; i < 9; i++){
        code[i] = NC[M[i]];
        if (code[i] == ' ') code[i] = '-';
    }

    return code;
}

int main(){
    int matricula[9] = {2, 2, 1, 0, 0, 8, 6, 3, 2};
    char nome_completo[27] = "Eduardo de Almeida Ferreira";
    char *mat_nome = retorn_mat_nm(matricula, nome_completo);
    printf("Matricula e nome: %s\n", mat_nome);
    

    return 0;
}
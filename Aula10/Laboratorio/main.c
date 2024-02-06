#include <stdio.h>
#include <stdlib.h>

long int insercao(int n, int v[]) {
    int i, j, aux;
    long int pesforco = 0;

    for (i = 1; i < n; i++) {
        aux = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > aux) {
            v[j + 1] = v[j];
            j--;
            pesforco++;
        }
        v[j + 1] = aux;
    }
    return pesforco;
}


        

long int bs(int n, int v[]) {
    long int pesforco = 0;
    int trocou;
    
    for (int i = 0; i < n - 1; i++) {
        trocou = 0;
        for (int j = 0; j < n - i - 1; j++) {
            pesforco++;
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                trocou = 1;
            }
        }
      
    }
    return pesforco;
}



int *gera_vet_aleatorio(int pn){
    int *pvet = (int *)malloc(sizeof(int)*pn);
    int pind;
    for(pind=0;pind<pn;pind++)
        pvet[pind] = rand();
    return pvet;
}

int main()
{
    FILE *pArqTeste, *pArqComp;
    int n, *V;
    float bsort;
    float ins;
    pArqTeste = fopen("/home/eduardo/Documents/Estrutura de Dados/Aula10/Laboratorio/testes.txt", "r");

    if(!pArqTeste){
        printf("Arquivo de Teste nao encontrado");
        return 0;
    }

    pArqComp = fopen("/home/eduardo/Documents/Estrutura de Dados/Aula10/Laboratorio/esforcocomputacional.txt", "w");
    if (pArqComp == NULL){
        printf("Erro na abertura do arquivo");
        return 0;
    }
    


    while(!feof(pArqTeste)){
        if (!fscanf(pArqTeste,"%d", &n))
            break;
        V = gera_vet_aleatorio(n);
        bsort = (float)bs(n, V)/n;
        ins = (float)insercao(n, V)/n;
        fprintf(pArqComp, "n = %d, bs = %.2f, ins = %.2f\n", n, bsort, ins);
    }


    fclose(pArqTeste);
    fclose(pArqComp);

    return 0;
}

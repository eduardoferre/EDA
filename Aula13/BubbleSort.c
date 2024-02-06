#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int *criarVetInt(int tamanho) {
    int *vetor;
    vetor = (int *)malloc(tamanho * sizeof(int));
    return vetor;
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int *vetor = criarVetInt(tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    bubbleSort(vetor, tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    free(vetor);
    return 0;
}

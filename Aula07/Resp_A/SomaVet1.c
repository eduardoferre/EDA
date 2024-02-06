#include <stdio.h>

int somaVetor(int vetor[], int quantidade) {
    if (quantidade <= 0) {
        printf("somaVetor(vetor, %d) = 0\n", quantidade);
        return 0; // Caso base: Se não houver elementos no vetor, a soma é zero.
    } else {
        printf("somaVetor(vetor, %d) = vetor[%d] + somaVetor(vetor, %d - 1)\n", quantidade, quantidade - 1, quantidade);
        int resultadoParcial = vetor[quantidade - 1] + somaVetor(vetor, quantidade - 1);
        printf("somaVetor(vetor, %d) = %d + %d = %d\n", quantidade, vetor[quantidade - 1], resultadoParcial, resultadoParcial);
        return resultadoParcial;
    }
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int resultado = somaVetor(vetor, tamanho);

    printf("A soma dos elementos do vetor é: %d\n", resultado);
    return 0;
}

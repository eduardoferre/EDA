#include <stdio.h>

int Ackermann(int m, int n, int* stack, int depth) {
    if (m == 0 && n > 0) {
        printf("A(%d, %d) = %d\n", m, n, n + 1);
        return n + 1;
    } else if (n == 0 && m > 0) {
        stack[depth] = m;
        printf("A(%d, %d) = A(%d, %d) = %d\n", m, n, m - 1, 1, Ackermann(m - 1, 1, stack, depth + 1));
        return Ackermann(m - 1, 1, stack, depth + 1);
    } else if (m > 0 && n > 0) {
        stack[depth] = m;
        int intermediateResult = Ackermann(m, n - 1, stack, depth + 1);
        printf("A(%d, %d) = A(%d, A(%d, %d)) = A(%d, %d) = %d\n", m, n, m - 1, m, n - 1, m, intermediateResult, Ackermann(m - 1, intermediateResult, stack, depth + 1));
        return Ackermann(m - 1, intermediateResult, stack, depth + 1);
    }
}

int main() {
    printf("\n-------------------------------------\n");
    printf("       RECUSVIDADE - ACKERMANN        \n");
    printf("-------------------------------------\n");

    int m, n;
    printf("Digite o valor de m: ");
    scanf("%d", &m);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int stack[100]; // Tamanho arbitrário para o registro de empilhamento
    int resultado = Ackermann(m, n, stack, 0);

    printf("O resultado da função é: %d\n", resultado);

    return 0;
}

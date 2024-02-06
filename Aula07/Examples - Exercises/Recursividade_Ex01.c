#include <stdio.h>

int expo(int x, int y)
{
    if (y == 0)
    {
        printf("expo(%d, %d) chamada. Retorna 1.\n", x, y);
        return 1;
    }
    if (y == 1)
    {
        printf("expo(%d, %d) chamada. Retorna %d.\n", x, y, x);
        return x;
    }

    
    printf("%d * expo(%d, %d-1) \n", x, x, y);

    return x * expo(x, y - 1);
}

int main(void)
{
    int x, y, e;

    printf("Exponencial de X elevado a Y\n\n");
    printf("\nDigite o numero inteiro X:");
    scanf("%d", &x);
    printf("\nDigite o numero inteiro Y:");
    scanf("%d", &y);

    if (y < 0)
    {
        printf("Y tem que ser maior ou igual a zero!!");
    }
    else
    {
        e = expo(x, y);
        printf("\n\nX elevado a Y é: %d\n", e);
    }

    return 0;
}

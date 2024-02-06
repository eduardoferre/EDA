#include <stdio.h>
#include <string.h>

int tamstring(char s[])
{
    if (s[0] == '\0' || s[0] == '\n')
        return 0;
    return 1 + tamstring(&s[1]);
}

int main(void)
{
    char s[20];
    int t;
    printf("Tamanho de string\n\n");
    printf("\nDigite a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; // Remove a quebra de linha lida por fgets
    t = tamstring(s);
    printf("\nO tamanho eh %d\n", t);

    return 0;
}

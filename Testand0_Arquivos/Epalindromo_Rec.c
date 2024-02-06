#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_palindromo(char *string, int inicio, int fim) {
    if (inicio >= fim) {
        return 1;
    }
    if (string[inicio] != string[fim]) {
        printf("Comparação: %c != %c\n", string[inicio], string[fim]);
        return 0;
    }
    printf("Comparação: %c == %c\n", string[inicio], string[fim]);
    return is_palindromo(string, inicio + 1, fim - 1);
}

int main() {
    char string[50];
    printf("Digite uma string: ");
    scanf("%s", string);

    int inicio = 0;
    int fim = strlen(string) - 1;
    int result = is_palindromo(string, inicio, fim);
    
    if (result == 1) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }

    return 0;
}

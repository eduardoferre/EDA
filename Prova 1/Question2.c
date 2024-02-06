#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordem_alf(char *str) {
    int n = strlen(str);

    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (str[i] > str[j]) {
                char aux = str[i];
                str[i] = str[j];
                str[j] = aux;
            }
        }
    }
}

int main(){

    char str[100];
    printf("Digite uma string: ");
    scanf("%s", str);
    ordem_alf(str);
    printf("String ordenada: %s\n", str);

    return 0;
}
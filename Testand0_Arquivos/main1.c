#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int i = 0; // Certifique-se de inicializar 'i' com zero

    fp = fopen("/home/eduardo/Documents/Eda/Testand0_Arquivos/seuarquivo.txt", "r");

    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    do {
        ch = fgetc(fp);
        if (ch != EOF) { // Verifique se 'ch' não é o final do arquivo antes de processá-lo
            printf("%c", ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                i++;
            }
        }
    } while (ch != EOF);

    fclose(fp);

    printf("\nNúmero de vogais 'a', 'e', 'i', 'o', 'u' no arquivo: %d\n", i);

    return 0;
}

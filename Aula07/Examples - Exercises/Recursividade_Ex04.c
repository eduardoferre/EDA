/* imprime uma string em ordem reversa*/
#include <stdio.h>
#include <string.h>

void contrario(char s[]) {
    if (s[0] != '\0') {
        contrario(&s[1]);
        printf("%c", s[0]);
    }
}

int main(void) {
    char s[30];
    printf("Imprime reverso\n\n");
    printf("Digite a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';  // Remove a quebra de linha no final da string
    contrario(s);
   // getchar();  // Use getchar() para esperar um caractere, em vez de getch()
   printf("\n\n");
    return 0;
}

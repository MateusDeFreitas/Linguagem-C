#include <stdio.h>
#include <ctype.h>

int main() {
    char string[100];
    printf("Digite uma string: ");
    scanf("%99[^\n]", string);

    int i = 0;
    while (string[i] != '\0') {
        string[i] = toupper(string[i]);
        i++;
    }

    printf("A string em maiúsculas: %s\n", string);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char hex[100];
    int decimal = 0;
    int i, j;

    printf("Digite um numero hexadecimal: ");
    scanf("%s", hex);

    for (i = 0; hex[i] != '\0'; i++) {
        decimal = decimal * 16;
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal = decimal + hex[i] - '0';
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal = decimal + hex[i] - 'A' + 10;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimal = decimal + hex[i] - 'a' + 10;
        } else {
            printf("Numero hexadecimal inválido.\n");
            return 1;
        }
    }

    printf("Representação decimal: %d\n", decimal);

    return 0;
}


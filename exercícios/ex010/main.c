#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro menor que 32: ");
    scanf("%d", &num);

    if (num < 32 && num >= 0) {
        int i;
        printf("Representação binária: ");
        for (i = 4; i >= 0; i--) {
            int bit = (num >> i) & 1;
            printf("%d", bit);
        }
        printf("\n");
    } else {
        printf("Número fora do intervalo válido.\n");
    }

    return 0;
}

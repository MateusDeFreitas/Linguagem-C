#include <stdio.h>

int main() {
    int num;

    printf("Digite um n�mero inteiro menor que 32: ");
    scanf("%d", &num);

    if (num < 32 && num >= 0) {
        int i;
        printf("Representa��o bin�ria: ");
        for (i = 4; i >= 0; i--) {
            int bit = (num >> i) & 1;
            printf("%d", bit);
        }
        printf("\n");
    } else {
        printf("N�mero fora do intervalo v�lido.\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, j;

    printf("Digite um numero para compor os limites da matriz: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N deve ser um número positivo.\n");
        return 1;
    }

    int matriz[N][N];

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matriz[i][j] = (i + j) % N + 1;
        }
    }

    printf("Com base nesses limites temos esse quadrado latino:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}


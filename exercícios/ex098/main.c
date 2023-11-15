#include <stdio.h>

int main() {
    int matrizA[4][3];
    int matrizB[3][2];
    int matrizC[4][2];
    int i, j, k;

    printf("Digite os elementos da matriz A (4x3):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Digite os elementos da matriz B (3x2):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            matrizC[i][j] = 0;
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    printf("Matriz resultante C (4x2 - Produto de A por B):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}


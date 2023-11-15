#include <stdio.h>

int main() {
    int matriz[5][5];
    int somaLinhas[5] = {0}; 
    int somaColunas[5] = {0}; 
	int i, j;
    
    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            somaLinhas[i] += matriz[i][j];
            somaColunas[j] += matriz[i][j];
        }
    }

    printf("Matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Soma das linhas:\n");
    for (i = 0; i < 5; i++) {
        printf("Linha %d: %d\n", i + 1, somaLinhas[i]);
    }


    printf("Soma das colunas:\n");
    for (j = 0; j < 5; j++) {
        printf("Coluna %d: %d\n", j + 1, somaColunas[j]);
    }

    return 0;
}


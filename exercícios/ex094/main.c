#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int matriz[6][6];
	int i, j, va;
    
    printf("Digite os elementos da matriz 6x6:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Matriz 6x6:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("Digite um valor (Esse valor ira multiplicar os valores da matriz): \n");
    scanf("%d", &va);
    
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            matriz[i][j] *= va;
        }
    }
    printf("\n");
    printf("Nova matriz 6x6:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
	return 0;
}

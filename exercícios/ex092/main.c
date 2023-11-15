#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int matriz[5][5];
	int i, j;
    
    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    if(matriz[0][1]==matriz[1][0] && matriz[0][2]==matriz[2][0] && matriz[0][3]==matriz[3][0] && 
	matriz[0][4]==matriz[4][0] && matriz[2][1]==matriz[1][2] && matriz[1][3]==matriz[3][1] && 
	matriz[3][2]==matriz[2][3] && matriz[1][4]==matriz[4][1] && matriz[2][4]==matriz[4][2] && matriz[4][3]==matriz[3][4]) {
    	printf("Essa matrix e simetrica.\n");
	} else {
		printf("Essa matrix nao e simetrica.\n");
	}
    
	return 0;
}

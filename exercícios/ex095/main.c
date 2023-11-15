#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int matriz[6][6];
	int vetor[36];
	int i, j, k=0;
    
    printf("Digite os elementos da matriz 6x6:\n");
    for (i = 0 ; i < 6 ; i++) {
        for (j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\n");
    printf("Matriz 6x6:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for (i = 0 ; i < 6 ; i++) {
        for (j = 0; j < 6; j++,k++) {
            vetor[k] = matriz[i][j];
        }
    }
    
    printf("Vetor resultante da matriz lineada: ");
    for(i=0 ; i<(sizeof(vetor) / sizeof(vetor[0])) ; i++) {
    	printf("%d, ",vetor[i]);
	}
	printf("\n");
	return 0;
}

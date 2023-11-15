#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int m1[3][4];
	int m2[3][4];
	int m3[3][4];
	int m4[3][4];

	int i, j;
    
    printf("Digite os elementos da matriz 3x4:\n");
    for (i = 0 ; i < 3 ; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &m1[i][j]);
        }
    }
	
	printf("\n");
	printf("Digite os elementos da segunda matriz 3x4:\n");
    for (i = 0 ; i < 3 ; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &m2[i][j]);
        }
    }
	
    for (i = 0 ; i < 3 ; i++) {
        for (j = 0; j < 4; j++) {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
	
	for (i = 0 ; i < 3 ; i++) {
        for (j = 0; j < 4; j++) {
            m4[i][j] = m1[i][j] - m2[i][j];
        }
    }
    
    printf("\n");
    printf("Primeira matriz:\n");
    for (i = 0 ; i < 3 ; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d	",m1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    printf("Segunda matriz:\n");
    for (i = 0 ; i < 3 ; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d	",m2[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    printf("Essa e uma matriz feita pela soma da primeira e segunda matriz:\n");
    for (i = 0 ; i < 3 ; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d	",m3[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    printf("Essa e uma matriz feita pela diferenca da primeira e segunda matriz:\n");
    for (i = 0 ; i < 3 ; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d	",m4[i][j]);
        }
        printf("\n");
    }
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int matriz[5][5];
	int vetor[5];
	int vetor2[5];
	int i, j, x=0, y=0;
    
    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\n");
    printf("Matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    //X e Y
    do {
        printf("Digite um valor de 1 a 5: \n");
        scanf("%d", &x);
    } while (x < 1 || x > 5);
	x-=1;

    do {
        printf("Digite outro valor de 1 a 5: \n");
        scanf("%d", &y);
    } while (y < 1 || y > 5);
    y-=1;
    
    //coluna x por coluna y
    for (i=0,j=x; i < 5; i++) {
        vetor[i] = matriz[i][j];
    }
    
    for (i=0,j=y; i < 5; i++) {
        vetor2[i] = matriz[i][j];
    }
    
    for (i=0,j=x; i < 5; i++) {
        matriz[i][j] = vetor2[i];
    }
    
    for (i=0,j=y; i < 5; i++) {
        matriz[i][j] = vetor[i];
    }
    
    //linha x por linha y
    for (i=x,j=0; j < 5; j++) {
        vetor[j] = matriz[i][j];
    }
    
    for (i=y,j=0; j < 5; j++) {
        vetor2[j] = matriz[i][j];
    }
     
    for (i=x,j=0; j < 5; j++) {
        matriz[i][j] = vetor2[j];
    }
    
    for (i=y,j=0; j < 5; j++) {
        matriz[i][j] = vetor[j];
    }
    
    //inverção de diagonais
    for(i=0,j=0 ; i<5 ; i++,j++) {
    	vetor[i] = matriz[i][j];
	}
    
    for(i=0,j=4 ; i<5 ; i++,j--) {
    	vetor2[i] = matriz[i][j];
	}
    
    for(i=0,j=0 ; i<5 ; i++,j++) {
    	matriz[i][j] = vetor2[i];
	}
	
	for(i=0,j=4 ; i<5 ; i++,j--) {
    	matriz[i][j] = vetor[i];
	}
    
    //resultado
    printf("\n");
    printf("A nova matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }	
	
	return 0;
}

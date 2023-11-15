#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int matriz[5][5];
	int i, j, p1, p2;
    
    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    } 
    
    for(i = 0,j = 0 ; i<5; i++,j++) {
    	p1+=matriz[i][j];
    	
	}
    for(i = 4,j = 0 ; j<5; i--,j++) {
    	p2+=matriz[i][j];
    	
	}
    
    printf("Soma da diagonal principal: %d\n",p1);
    printf("Soma da diagonal secundaria: %d\n",p2);
    
	return 0;
}

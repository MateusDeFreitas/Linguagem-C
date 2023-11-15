#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int array[20];
	int menor, maior, i;
	
	for(i=0;i<20;i++) {
		printf("Digite o valor da posição %d: ",i);
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<20;i++) {
		if (i==0) {
			maior = array[i];
		} else if (array[i]>maior) {
			maior = array[i];
		}
	}
	
	for(i=0;i<20;i++) {
		if (i==0) {
			menor = array[i];
		} else if (array[i]<menor) {
			menor = array[i];
		}
	}
	
	printf("\n");
	printf("O menor valor no array é %d\n", menor);
    printf("O maior valor no array é %d\n", maior);
	
	return 0;
}

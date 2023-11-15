#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int array[20];
	int menor, maior, i, p1, p2;
	
	for(i=0;i<20;i++) {
		printf("Digite o valor da posição %d: ",i);
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<20;i++) {
		if (i==0) {
			maior = array[i];
			p1 = i;
		} else if (array[i]>maior) {
			maior = array[i];
			p1 = i;
		}
	}
	
	for(i=0;i<20;i++) {
		if (i==0) {
			menor = array[i];
			p2 = i;
		} else if (array[i]<menor) {
			menor = array[i];
			p2 = i;
		}
	}
	
	printf("\n");
	printf("O menor valor no array é %d localizado na %d posição.\n", menor, p2);
    printf("O maior valor no array é %d localizado na %d posição.\n", maior, p1);
	
	return 0;
}

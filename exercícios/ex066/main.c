#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int v1[10];
	int v2[10];
	int i;
	
	for(i=0;i<10;i++) {
		printf("Digite o valor da posição %d: ",i);
		scanf("%d",&v1[i]);
	}
	
	for(i=0;i<10;i++) {
		v2[i] = v1[i];
	}
	printf("\n");
	for(i=0;i<10;i++) {
		printf("O valor da posição %d do segundo vetor é %d\n",i,v2[i]);
	}
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int array[10];
	int n, i, res;
	res = -1;
	
	printf("complete o vetor:\n");
	printf("\n");
	
	for(i=0;i<10;i++) {
		printf("Digite o valor da posicao %d: ",i);
		scanf("%d",&array[i]);
	}
	
	printf("\n");
	printf("Digite um numero para buscar dentro do vetor: ");
	scanf("%d",&n);
	printf("\n");
	
	for(i=0;i<10;i++) {
		if(array[i]==n) {
			res = i;
			break;
		}
	}
	
	printf("\n");
	if (res==-1) {
		printf("O numero %d nao foi encontrado.\n",n);
	} else {
	printf("O numero %d esta na posicao: %d\n", n, res);
	}
	
	return 0;
}

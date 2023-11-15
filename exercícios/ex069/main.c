#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int v[15];
	int i, n, x;
	x = 0;
	
	for(i=0;i<15;i++) {
		printf("Digite o valor da posição %d do vetor: ",i);
		scanf("%d",&v[i]);
	}
	
	printf("\n");
	printf("Digite um numero inteiro qualquer: ");
	scanf("%d",&n);
	printf("\n");
	
	for(i=0;i<15;i++) {
		if(n==v[i]) {
			x++;
		}
	}
	
	printf("\n");
	printf("O numero %d apareceu %d vezes no vetor.",n,x);
	
	return 0;
}

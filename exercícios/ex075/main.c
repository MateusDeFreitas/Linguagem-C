#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v[15];
	int i, j, k, r;	
	for(i=0;i<15;i++) {
		printf("Digite o valor da posicao %d: ",i);
		scanf("%d",&v[i]);
		if(i!=0) {
			k = i;
			for(j=0;j<=i;j++){
				if(v[k]<v[k-1]) {
					r = v[k-1];
					v[k-1] = v[k];
					v[k] = r;
					k--;
				}
			}
		}
	}
	printf("Vetor ordenado:\n");
	for(i=0;i<15;i++) {
		printf("Valor da posicao %d: %d\n",i,v[i]);
	}
	return 0;
}

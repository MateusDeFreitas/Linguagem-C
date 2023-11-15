#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	double ve1[10];
	double ve2[10];
	double veR[10];
	int i;
	int cont = 0;
	
	printf("Preenchendo vetor 1:\n");	
	for (i=0 ; i<10 ; i++) {
		printf("\nDigite o número que ficará na posição %d: ",i);
		scanf("%lf",&ve1[i]);
	}

	printf("\nPreenchendo vetor 2:\n");
	for (i=0 ; i<10 ; i++) {
		printf("\nDigite o número que ficará na posição %d: ",i);
		scanf("%lf",&ve2[i]);
	}

	printf("\n");
	for (i=0 ; i<10 ; i++) {
		veR[i] = ve1[i] + ve2[i];
		printf("A soma dos vetores nas posições %d é %.2lf\n",i,veR[i]);
	}

	return 0;
}

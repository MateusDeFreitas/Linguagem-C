#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, i;
	float S, termo; 
	double div;
	
	
	printf("Sendo S um somatório de N\n");
	printf("Digite um número N para calcular a série: \n");
    scanf("%d", &n);
	
	S = 1;
	
	for (i = 2;i<=n;i++) {
		div = pow(i,i);
		termo = 1/div;
		S+=termo;
	}
	
	printf("O valor de S é %.2f",S);
	
	return 0;
}



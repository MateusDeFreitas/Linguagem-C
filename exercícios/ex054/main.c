#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,m1,m2,m3;
	
	printf("Esse programa recebe um n�mero e verifica se ele � um n�mero triangular.\n");
	printf("Digite um n�mero para verifica-lo: \n");
	scanf("%d",&n);
	
	m1 = 0;
	m2 = 1;
	m3 = 2;
	
	if (n==0) {
		printf("%d � equivalente � %dx%dx%d portanto � triangular.\n",n,m3,m2,m1);
	} else {
		while (n>=m3) {
			if (n==m1*m2*m3) {
				printf("%d � equivalente � %dx%dx%d portanto � triangular.\n",n,m3,m2,m1);
				break;
			} else if (n>=m3) {
				m1++;
				m2++;
				m3++;
			}
		}
		if (n<m3) {
			printf("%d n�o � triangular.\n",n);
			}
	} 
	
	return 0;
}

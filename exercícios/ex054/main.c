#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,m1,m2,m3;
	
	printf("Esse programa recebe um número e verifica se ele é um número triangular.\n");
	printf("Digite um número para verifica-lo: \n");
	scanf("%d",&n);
	
	m1 = 0;
	m2 = 1;
	m3 = 2;
	
	if (n==0) {
		printf("%d é equivalente à %dx%dx%d portanto é triangular.\n",n,m3,m2,m1);
	} else {
		while (n>=m3) {
			if (n==m1*m2*m3) {
				printf("%d é equivalente à %dx%dx%d portanto é triangular.\n",n,m3,m2,m1);
				break;
			} else if (n>=m3) {
				m1++;
				m2++;
				m3++;
			}
		}
		if (n<m3) {
			printf("%d não é triangular.\n",n);
			}
	} 
	
	return 0;
}

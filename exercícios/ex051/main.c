#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int term, cont, n, an, pn;
	
	printf("Esse programa gera a s�rie de FIBONACCI at� o termo N\n");
	printf("Digite o valor de N: \n");
	scanf("%d",&term);
	
	cont = n = pn = 1;
	printf("O termo %d � igual � %d\n",cont,pn);
	
	while (cont<term) {
		cont++;
		an = n;
		printf("O termo %d � igual � %d\n",cont,pn);
		n = pn;
		pn = n+an;
	}
	
	return 0;
}

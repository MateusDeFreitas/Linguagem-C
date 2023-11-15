#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("Sabendo que um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3/100 ao ano, \ne um país B com 7.000.000 de habitantes e uma taxa de natalidade de 2/100 ao ano\n\nquanto tempo levará para a população ser a maior?\n");
	
	
	
	int popA = 5000000;
	int popB = 7000000;
	float txA = 1.03;
	float txB = 1.02;
	
	int anos = 0;
	
	while (popA<popB) {
		popA *= txA;
		popB *= txB;
		anos++;
	}
	
	printf("\n");
	printf("A população do país A irá ultrapassar a população do país B em %d anos.\n",anos);
	printf("\n");	
	
	
	return 0;
}

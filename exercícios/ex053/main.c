#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("Sabendo que um pa�s A, com 5.000.000 de habitantes e uma taxa de natalidade de 3/100 ao ano, \ne um pa�s B com 7.000.000 de habitantes e uma taxa de natalidade de 2/100 ao ano\n\nquanto tempo levar� para a popula��o ser a maior?\n");
	
	
	
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
	printf("A popula��o do pa�s A ir� ultrapassar a popula��o do pa�s B em %d anos.\n",anos);
	printf("\n");	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double num, mod;
	
	printf("Digite um n�mero: ");
	scanf("%lf", &num);
	
	mod = fabs(num);
	
	printf("O m�dulo de %.2lf � %.2lf.",num, mod);
	
	
	return 0;
}

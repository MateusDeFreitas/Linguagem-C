#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float vol, alt, raio;
	
	printf("Digite o raio da lata: ");
	scanf("%f",&raio);
	printf("Digite a altura da lata: ");
	scanf("%f",&alt);
	
	vol = M_PI * pow(raio, 2) * alt;
	
	printf("O volume da lata de olho é %.2f",vol);
	
	
	
	return 0;
}

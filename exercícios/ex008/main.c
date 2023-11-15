#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	float f, c;
	printf("digite uma temperatura em fahrenheit: ");
	scanf("%f", &f);
	
	c = 	5.0/9.0*(f-32);
	printf("A temperatura equivalente a essa em Celsius é %.2f",c);
	
	
	
	return 0;
}

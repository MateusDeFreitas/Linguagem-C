#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n;
	
	printf("Digite um n�mero: ");
	scanf("%f",&n);
	
	if (n>0) {
		printf("Esse n�mero � positivo.");
	} else if (n<0) {
		printf("Esse n�mero � negativo.");
	} else {
		printf("Esse n�mero � neutro.");
	}
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n;
	
	printf("Digite um número: ");
	scanf("%f",&n);
	
	if (n>0) {
		printf("Esse número é positivo.");
	} else if (n<0) {
		printf("Esse número é negativo.");
	} else {
		printf("Esse número é neutro.");
	}
	
	
	
	return 0;
}

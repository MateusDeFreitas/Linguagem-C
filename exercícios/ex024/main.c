#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2, n3;
	
	printf("Digite um n�mero: ");
	scanf("%f",&n1);
	printf("Digite outro n�mero: ");
	scanf("%f",&n2);
	printf("Digite um terceiro n�mero: ");
	scanf("%f",&n3);
	
	float maior = n1;
	
	if (n2>maior) {
		maior = n2;}
		
	if (n3>maior) {
		maior = n3;}

	printf("Dentre eles o maior n�mero � o %.2f", maior);
	
	
	
	return 0;
}

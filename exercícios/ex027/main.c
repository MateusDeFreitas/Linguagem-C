#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2, n3, m;
	
	
	printf("Digite um valor: ");
	scanf("%f",&n1);
	printf("Digite outro valor: ");
	scanf("%f",&n2);
	printf("Digite um terceiro valor: ");
	scanf("%f",&n3);
	
	float maior = n1;
	
	if (n2>maior) {
		maior = n2;
	}
	if (n3>maior) {
		maior = n3;
	}
	
	if (n1==maior) {
		m = n1*0.5+n2*0.25+n3*0.25;
	} else if (n2==maior) {
		m = n1*0.25+n2*0.5+n3*0.25;
	} else {
		m = n1*0.25+n2*0.25+n3*0.5;
	}

	
	printf("\n");
	printf("==================================================\n");
	
	printf("A média ponderada considerando\n o maior número o recebe peso 5 e os outros dois\n recebem peso 2,5 é %.2f",m);
	
	return 0;
}

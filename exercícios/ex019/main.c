#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a, b;
	
	printf("Digite o valor de A: ");
	scanf("%f",&a);
	
	printf("Digite o valor de B: ");
	scanf("%f",&b);
	
	if (a==0) {
		if (b==0) {
			printf("Essa equa��o possui infinitas solu��es.\n");
		} else {
			printf("Essa equa��o n�o possui solu��o.\n");
		}
	} else {
		float x = -b / a;
		printf("A raiz da equa��o � x= %.2f",x);
	}
	
	

	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float vel;
	
	printf("digite uma velocidade em metros por segundo: ");
	scanf("%f",&vel);
	
	float velkm = vel*3.6;
	printf("A conver��o dessa velocidade em kilometros por horra � %.2f",velkm);
	
	
	
	
	return 0;
}

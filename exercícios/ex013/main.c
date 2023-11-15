#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float r1, r2, r3, rp, rt;
	
	printf("Digite o valor da resistência um: \n");
	scanf("%f",&r1);
	
	printf("Digite o valor da resistência dois: \n");
	scanf("%f",&r2);
	
	printf("Digite o valor da resistência três: \n");
	scanf("%f",&r3);
	
    rp = 1 / ((1 / r1) + (1 / r2));
	
	rt = rp+r3;
	
	
	printf("A resistencia paralela do circuito e: %.2f ohms\n", rp);
	printf("A resistencia equivalente do circuito e: %.2f ohms\n", rt);
	
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float raio, area, per;


    printf("Digite tamanho do raio do circulo: ");
    scanf("%f", &raio);


    area = M_PI * (raio * raio);


    per = 2 * M_PI * raio;
    
   
	printf("A �rea do circulo �: %.2f\n", area);
    printf("O per�metro do circulo �: %.2f\n", per);
	
	return 0;
}

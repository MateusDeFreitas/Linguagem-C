#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float alt, lar, area, per;
	printf("Digite qual � a largura do ret�ngulo: ");
	scanf("%f", &lar);
	printf("Digite qual � a altura do ret�ngulo: ");
	scanf("%f", &alt);
	
	area = lar * alt;
	printf("A �rea do retangulo � %.2f\n", area);
	
	per = 2 * (alt + lar);
	printf("O perimetro do retangulo � %.2f\n", per);
	
	
	
	return 0;
}

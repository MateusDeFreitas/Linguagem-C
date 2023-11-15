#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float l1, l2, l3, per;


    printf("Digite o tamanho do primeiro lado do triângulo: ");
    scanf("%f", &l1);

	printf("Digite o tamanho do segundo lado do triângulo: ");
    scanf("%f", &l2);

	printf("Digite o tamanho do terceiro lado do triângulo: ");
    scanf("%f", &l3);

    per = l1 + l2 + l3;
    
   
	printf("O perimetro do triângulo é: %.2f\n", per);
	
	return 0;
}

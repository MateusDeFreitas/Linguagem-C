#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char tipo;
	float qnt, preco, gasto;
	
	
	printf("Qual tipo de combust�vel � ser comprado: \n");
	printf("* [A] para �lcool.\n");
	printf("* [G] para gasolina.\n");
	scanf("%c",&tipo);
	
	printf("digite qual � a quantidade desejada: \n");
	scanf("%f",&qnt);
	
	if (tipo=='A') {
		if (qnt<=25) {
			preco = 1.90*0.98;
		} else {
			preco = 1.90*0.96;
		}
	} else {
		if (qnt<=25) {
			preco = 2.70*0.97;
		} else {
			preco = 2.70*0.95;
		}
	}
	
	gasto = preco*qnt;
	
	printf("O valor total a ser pago � %.2f", gasto);
	
	return 0;
}

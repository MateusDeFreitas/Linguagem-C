#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float rm, ve, npres;
	
	printf("Digite a sua renda mensal em reais: ");
	scanf("%f",&rm);
	
	printf("Digite o valor do empr�stimo desejado: ");
	scanf("%f",&ve);
	
	printf("Digite o n�mero de presta��es planejadas: ");
	scanf("%f",&npres);
	
	
	
	if (ve>(rm*10)) {
		printf("Empr�stimo negado!");
	} else if (ve/npres>rm*0.3) {
		printf("Empr�stimo negado!");
	} else {
		printf("Empr�stimo aprovado!");
	}
	
	return 0;
}

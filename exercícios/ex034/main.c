#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float rm, ve, npres;
	
	printf("Digite a sua renda mensal em reais: ");
	scanf("%f",&rm);
	
	printf("Digite o valor do empréstimo desejado: ");
	scanf("%f",&ve);
	
	printf("Digite o número de prestações planejadas: ");
	scanf("%f",&npres);
	
	
	
	if (ve>(rm*10)) {
		printf("Empréstimo negado!");
	} else if (ve/npres>rm*0.3) {
		printf("Empréstimo negado!");
	} else {
		printf("Empréstimo aprovado!");
	}
	
	return 0;
}

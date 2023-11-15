#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num, div, ndiv;
	
	div = 1;
	ndiv = 0;
	
	printf("Digite um número para verificar se ele é primo: \n");
	scanf("%d",&num);
	
	while (num>=div) {
		if (num%div==0) {
			ndiv++;
		}
		div++;
	}
	
	if (ndiv==2) {
		printf("%d é primo!\n",num);
	} else {
		printf("%d não é primo.\n",num);
	}
	
	
	// O enunciado do exercício 48 é igual ao do 49!!!
	
	
	return 0;
}

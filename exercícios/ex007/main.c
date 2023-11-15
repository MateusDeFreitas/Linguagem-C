#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int idade;
	
	printf("digite a sua idade em dias: ");
	scanf("%d",&idade);
	
	int anos = idade/365;
	int meses = idade%365/30;
	int dias = idade%365%30;
	
	
	
	printf("A sua idade é %d anos, %d meses e %d dias\n", anos, meses, dias);
	
	
	
	
	return 0;
}

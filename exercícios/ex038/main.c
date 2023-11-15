#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int ano;
	
	printf("Digite um ano: \n");
	scanf("%d",&ano);
	
	if ((ano%4==0) && (ano%100!=0 || ano%400==0)) {
		printf("%d é um ano bissexto!",ano);
	} else {
		printf("%d não é um ano bissexto!",ano);
	}
	
	
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("Imprimindo os números de 1 a 100 e a sua soma: \n");
	
	int i;
	int soma = 0;
	
	for(i = 1; i<=100;i++) {
		printf("%d ",i);
		soma+=i;
	}
	
	printf("\nA soma total é %d",soma);
	
	return 0;
}

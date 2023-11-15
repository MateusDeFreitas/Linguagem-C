#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("Imprimindo os números de 100 a 1: \n");
	
	int i;
	
	for(i = 100; i>=1;i--) {
		printf("%d, ",i);
	}
	
	return 0;
}

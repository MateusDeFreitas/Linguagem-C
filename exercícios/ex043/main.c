#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("Imprimindo os números pares entre 1 e 100: \n");
	
	int i;
	
	for(i = 1; i<=100;i++) {
		if (i%2==0) {
			printf("%d, ",i);
		}
	}
	
	return 0;
}

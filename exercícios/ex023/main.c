#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int num;
	
	printf("Digite um número: ");
    scanf("%d", &num);
	
	if (num%2==0) {
		printf("Esse número é par.");
	} else {
		printf("Esse número é impar.");
	}
	
	
	
	
	
	
	
	return 0;
}
